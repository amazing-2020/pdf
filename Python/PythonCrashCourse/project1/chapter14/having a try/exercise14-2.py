import sys
from time import sleep
import pygame

from pygame.sprite import Sprite
import pygame.font


class Settings:
    def __init__(self):
        self.screen_width = 1200
        self.screen_height = 800
        self.bg_color = (230, 230, 230)

        self.space_ship_speed = 1.5

        self.bullet_speed = 1.5
        self.bullet_width = 15
        self.bullet_height = 3
        self.bullet_color = (60, 60, 60)
        self.bullet_count = 0
        self.bullet_allowed = 60

        self.rectangle_width = 30
        self.rectangle_height = 200
        self.rectangle_speed = 1
        self.rectangle_color = (60, 60, 90)
        self.rectangle_missing_allowed = 3
        self.rectangle_direction = 1


class GameStates:
    def __init__(self, fly):
        self.settings = fly.settings
        self.reset_stats()

        self.bullet_amount = 0
        self.number_of_hits = 0
        self.rectangle_missing = 0
        self.game_active = False

    def reset_stats(self):
        self.rectangle_missing = 0
        self.bullet_amount = 0
        self.number_of_hits = 0
        self.game_active = False
        pygame.mouse.set_visible(True)


class Rectangle:
    def __init__(self, ai_game):
        self.settings = ai_game.settings
        self.screen = ai_game.screen
        self.screen_rect = self.screen.get_rect()
        self.rect = pygame.Rect(0, 0, self.settings.rectangle_width, self.settings.rectangle_height)
        self.rect.midright = self.screen_rect.midright
        self.color = self.settings.rectangle_color

        self.y = float(self.rect.y)

    def check_edges(self):
        if self.rect.top <= self.screen_rect.top or self.rect.bottom >= self.screen_rect.bottom:
            return True

    def update(self):
        self.y += (self.settings.rectangle_speed * self.settings.rectangle_direction)
        self.rect.y = self.y

    def draw_rectangle(self):
        pygame.draw.rect(self.screen, self.color, self.rect)

    def center_rectangle(self):
        self.rect.midright = self.screen_rect.midright
        self.y = float(self.rect.y)


class Button:
    def __init__(self, ai_game, msg):
        self.screen = ai_game.screen
        self.screen_rect = self.screen.get_rect()

        self.width, self.height = 200, 50
        self.button_color = (0, 250, 0)
        self.text_color = (255, 255, 255)
        self.font = pygame.font.SysFont(None, 48)

        self.rect = pygame.Rect(0, 0, self.width, self.height)
        self.rect.center = self.screen_rect.center

        self._prep_msg(msg)

    def _prep_msg(self, msg):
        self.msg_image = self.font.render(msg, True, self.text_color, self.button_color)
        self.msg_image_rect = self.msg_image.get_rect()
        self.msg_image_rect.center = self.rect.center

    def draw_button(self):
        self.screen.fill(self.button_color, self.rect)
        self.screen.blit(self.msg_image, self.msg_image_rect)


class Bullet(Sprite):
    def __init__(self, fly):
        super().__init__()
        self.screen = fly.screen
        self.settings = fly.settings
        self.color = self.settings.bullet_color

        self.rect = pygame.Rect(0, 0, self.settings.bullet_width, self.settings.bullet_height)
        self.rect.midleft = fly.space_ship.rect.midright

        self.x = float(self.rect.x)

    def update(self):
        self.x += self.settings.bullet_speed
        self.rect.x = self.x

    def draw_bullet(self):
        pygame.draw.rect(self.screen, self.color, self.rect)


class SpaceShip:
    def __init__(self, fly):
        self.screen = fly.screen
        self.settings = fly.settings
        self.screen_rect = fly.screen.get_rect()

        self.image = pygame.image.load('../images/ship2.bmp')
        self.rect = self.image.get_rect()

        self.rect.left = self.screen_rect.left

        self.y = float(self.rect.y)

        self.moving_up = False
        self.moving_down = False

    def update(self):
        if self.moving_up and self.rect.top > self.screen_rect.top:
            self.y -= self.settings.space_ship_speed
        if self.moving_down and self.rect.bottom < self.screen_rect.bottom:
            self.y += self.settings.space_ship_speed

        self.rect.y = self.y

    def blitem(self):
        self.screen.blit(self.image, self.rect)

    def center_ship(self):
        self.rect.midleft = self.screen_rect.midleft
        self.y = float(self.rect.y)


class Move:
    def __init__(self):
        pygame.init()
        self.settings = Settings()
        self.screen = pygame.display.set_mode((self.settings.screen_width, self.settings.screen_height))
        pygame.display.set_caption("Shooting")

        self.status = GameStates(self)
        self.space_ship = SpaceShip(self)
        self.rectangle = Rectangle(self)
        self.bullets = pygame.sprite.Group()

        self.play_button = Button(self, "Play")

    def run_game(self):
        while True:
            self._check_events()

            if self.status.game_active:
                self.space_ship.update()
                self._update_bullets()
                self._update_rectangle()

            self._update_screen()

    def _check_events(self):
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                sys.exit()
            elif event.type == pygame.KEYDOWN:
                self.check_keydown_events(event)
            elif event.type == pygame.KEYUP:
                self.check_keyup_events(event)
            elif event.type == pygame.MOUSEBUTTONDOWN:
                mouse_pos = pygame.mouse.get_pos()
                self._check_play_button(mouse_pos)

    def _check_play_button(self, mouse_pos):
        button_clicked = self.play_button.rect.collidepoint(mouse_pos)
        if button_clicked and not self.status.game_active:
            self.status.reset_stats()
            self.status.game_active = True

            self.bullets.empty()
            self.space_ship.center_ship()
            pygame.mouse.set_visible(False)

    def check_keydown_events(self, event):
        if event.key == pygame.K_UP:
            self.space_ship.moving_up = True
        elif event.key == pygame.K_DOWN:
            self.space_ship.moving_down = True
        elif event.key == pygame.K_q:
            sys.exit()
        elif event.key == pygame.K_SPACE:
            self._fire_bullet()

    def check_keyup_events(self, event):
        if event.key == pygame.K_UP:
            self.space_ship.moving_up = False
        elif event.key == pygame.K_DOWN:
            self.space_ship.moving_down = False

    def _update_rectangle(self):
        self._check_rectangle_edges()
        self.rectangle.update()
        print(self.status.bullet_amount, " ", self.status.number_of_hits)

        if pygame.sprite.spritecollideany(self.rectangle, self.bullets):
            self._rectangle_hit()

    def _check_rectangle_edges(self):
        if self.rectangle.check_edges():
            self._change_rectangle_direction()

    def _change_rectangle_direction(self):
        self.settings.rectangle_direction *= -1

    def _fire_bullet(self):
        self.status.bullet_amount += 1  # 统计发射子弹数目
        if len(self.bullets) < self.settings.bullet_allowed:
            new_bullet = Bullet(self)
            self.bullets.add(new_bullet)

    def _update_bullets(self):
        self.bullets.update()
        #  remove the disappeared bullets
        for bullet in self.bullets.copy():
            if bullet.rect.left > self.settings.screen_width:
                self.bullets.remove(bullet)
                self._check_missed()

    def _check_missed(self):
        if self.status.bullet_amount - self.status.number_of_hits >= 3:
            self.space_ship.center_ship()
            self.bullets.empty()
            self.status.reset_stats()
            sleep(0.5)

    def _rectangle_hit(self):
        for bu in self.bullets.copy():
            self.bullets.remove(bu)
            self.status.number_of_hits += 1
            break

    def _update_screen(self):
        self.screen.fill(self.settings.bg_color)
        self.space_ship.blitem()
        for bullet in self.bullets.sprites():
            bullet.draw_bullet()
        self.rectangle.draw_rectangle()
        if not self.status.game_active:
            self.play_button.draw_button()
        pygame.display.flip()


if __name__ == '__main__':
    ai = Move()
    ai.run_game()
