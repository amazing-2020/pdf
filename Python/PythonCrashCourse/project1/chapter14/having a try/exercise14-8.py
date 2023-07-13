import sys
from time import sleep
import pygame

from pygame.sprite import Sprite
from pygame.sprite import Group
import pygame.font


class Settings:
    def __init__(self):
        self.screen_width = 1200
        self.screen_height = 800
        self.bg_color = (230, 230, 230)

        self.space_ship_speed = 1.5

        self.bullet_speed = 5
        self.bullet_width = 15
        self.bullet_height = 3
        self.bullet_color = (60, 60, 60)
        self.bullet_count = 0
        self.bullet_allowed = 60

        self.rectangle_width = 30
        self.rectangle_height = 200
        self.rectangle_speed = 0.5
        self.rectangle_color = (60, 60, 90)
        self.rectangle_missing_allowed = 3
        self.rectangle_direction = 1

        self.hit_points = 50

        self.bar_width = self.screen_width
        self.bar_height = 50
        self.bar_bg_color = (5, 90, 91)

        self.button_height = 50
        self.play_button_width = 200
        self.play_button_color = (0, 250, 0)

        self.reset_button_color = (203, 160, 170)
        self.reset_button_x = self.screen_width / 4
        self.reset_button_y = 0
        self.reset_button_width = 150

        self.upgrade_button_color = (17, 35, 120)
        self.upgrade_button_y = 0
        self.upgrade_button_width = 150

        self.speedup_scale = 1.5

    def initialize_dynamic_settings(self):
        self.space_ship_speed = 1.5
        self.bullet_speed = 5.0
        self.rectangle_speed = 0.5

        self.hit_points = 50

    def increase_speed(self):
        self.rectangle_speed *= self.speedup_scale
        self.space_ship_speed *= self.speedup_scale * 0.8
        self.bullet_speed *= self.speedup_scale * 0.8

        self.hit_points = int(self.hit_points * self.speedup_scale)


class Bar:
    def __init__(self, fly):
        self.settings = fly.settings
        self.screen = fly.screen
        self.width = fly.settings.bar_width
        self.height = fly.settings.bar_height
        self.rect = pygame.Rect(0, 0, self.width, self.height)
        self.color = fly.settings.bar_bg_color
        self.rect.midtop = self.screen.get_rect().midtop

    def draw_bar(self):
        pygame.draw.rect(self.screen, self.color, self.rect)


class ScoreBoard:
    def __init__(self, ai_game):
        self.ai_game = ai_game
        self.screen = ai_game.screen
        self.settings = ai_game.settings
        self.screen_rect = ai_game.screen.get_rect()
        self.bar_rect = ai_game.bar.rect
        self.reset_button_rect = ai_game.reset_button.rect
        self.upper_button_rect = ai_game.upgrade_button.rect
        self.stats = ai_game.stats

        self.text_color = (30, 30, 30)
        self.font = pygame.font.SysFont(None, 48)

        self._prep_data()

    def prep_score(self):
        rounded_score = round(self.stats.score, -1)
        score_str = "{:,}".format(rounded_score)
        self.score_image = self.font.render(score_str, True,
                                            self.text_color, self.settings.bar_bg_color)
        self.score_rect = self.score_image.get_rect()
        self.score_rect.right = self.bar_rect.right - 20
        self.score_rect.centery = self.bar_rect.centery

    def prep_high_score(self):
        high_score = round(self.stats.high_score, -1)
        high_score_str = "{:,}".format(high_score)
        self.high_score_image = self.font.render(high_score_str, True,
                                                 self.text_color, self.settings.bar_bg_color)
        self.high_score_rect = self.score_image.get_rect()
        self.high_score_rect.centery = self.bar_rect.centery
        self.high_score_rect.left = self.bar_rect.left

    def prep_level(self):
        level_str = str(self.stats.level)
        self.level_image = self.font.render(level_str, True,
                                            self.text_color, self.settings.bar_bg_color)
        self.level_rect = self.level_image.get_rect()
        self.level_rect.right = self.reset_button_rect.left
        self.level_rect.centery = self.bar_rect.centery

    def check_high_score(self):
        if self.stats.score > self.stats.high_score:
            self.stats.high_score = self.stats.score
            self.prep_high_score()

    def prep_heart(self):
        self.hearts = Group()
        for heart_number in range(self.settings.rectangle_missing_allowed - self.stats.rectangle_missing):
            heart = Heart(self.ai_game)
            heart.rect.left = 5 + self.upper_button_rect.right + heart_number * 50
            heart.rect.centery = self.bar_rect.centery
            self.hearts.add(heart)

    def _prep_data(self):
        self.prep_score()
        self.prep_high_score()
        self.prep_level()
        self.prep_heart()

    def show_score(self):
        self.screen.blit(self.score_image, self.score_rect)
        self.screen.blit(self.high_score_image, self.high_score_rect)
        self.screen.blit(self.level_image, self.level_rect)
        self.hearts.draw(self.screen)


class Heart(Sprite):
    def __init__(self, ai_game):
        super().__init__()
        self.screen = ai_game.screen
        self.screen_rect = ai_game.screen.get_rect()

        self.image = pygame.image.load('heart.svg')
        self.rect = self.image.get_rect()


class GameStates:
    def __init__(self, fly):
        self.settings = fly.settings
        self.reset_stats()

        self.bullet_amount = 0
        self.number_of_hits = 0
        self.rectangle_missing = 0
        self.score = 0
        self.level = 1
        self.high_score = 0
        self.game_active = False

    def reset_stats(self):
        self.rectangle_missing = 0
        self.bullet_amount = 0
        self.number_of_hits = 0
        self.score = 0
        self.level = 1
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
        if self.rect.top <= self.screen_rect.top + self.settings.bar_height or \
                self.rect.bottom >= self.screen_rect.bottom:
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
        self.settings = ai_game.settings
        self.screen_rect = self.screen.get_rect()

        self.width, self.height = 200, 50
        self.button_color = (0, 250, 0)
        self.text_color = (255, 125, 100)
        self.font = pygame.font.SysFont(None, 48)
        self._choose_set(msg)

        self.rect = pygame.Rect(0, 0, self.width, self.height)
        self._set_location(msg)

        self._prep_msg(msg)

    def _choose_set(self, msg):
        if msg == 'Play':
            self.width = self.settings.play_button_width
            self.height = self.settings.button_height
            self.button_color = self.settings.play_button_color
        elif msg == 'Reset':
            self.width = self.settings.reset_button_width
            self.height = self.settings.button_height
            self.button_color = self.settings.reset_button_color
        elif msg == 'Upper':
            self.width = self.settings.upgrade_button_width
            self.height = self.settings.button_height
            self.button_color = self.settings.upgrade_button_color

    def _set_location(self, msg):
        if msg == 'Play':
            self.rect.center = self.screen_rect.center
        elif msg == 'Reset':
            self.rect = pygame.Rect(self.screen_rect.width / 2 - self.width, 0, self.width, self.height)
        elif msg == 'Upper':
            self.rect = pygame.Rect(self.screen_rect.width / 2, 0, self.width, self.height)

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
        self.bar = Bar(self)

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
        self.rect = pygame.Rect(0, self.settings.bar_height, self.rect.width, self.rect.height)

        self.y = float(self.rect.y)

        self.moving_up = False
        self.moving_down = False

    def update(self):
        if self.moving_up and self.rect.top > self.screen_rect.top + self.settings.bar_height:
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

        self.stats = GameStates(self)
        self.space_ship = SpaceShip(self)
        self.hearts = Heart(self)
        self.rectangle = Rectangle(self)
        self.bar = Bar(self)
        self.bullets = pygame.sprite.Group()

        self.play_button = Button(self, "Play")
        self.reset_button = Button(self, "Reset")
        self.upgrade_button = Button(self, "Upper")
        self.sb = ScoreBoard(self)

    def run_game(self):
        while True:
            self._check_events()

            if self.stats.game_active:
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
                self._check_reset_button(mouse_pos)
                self._check_upper_button(mouse_pos)

    def _check_play_button(self, mouse_pos):
        button_clicked = self.play_button.rect.collidepoint(mouse_pos)
        if button_clicked and not self.stats.game_active:
            self.stats.game_active = True
            self.settings.initialize_dynamic_settings()

            self.bullets.empty()
            self.space_ship.center_ship()

    def _check_reset_button(self, mouse_pos):
        button_clicked = self.reset_button.rect.collidepoint(mouse_pos)
        if button_clicked and self.stats.game_active:
            self.settings.initialize_dynamic_settings()

            self.stats.level = 1
            self.sb.prep_level()

    def _check_upper_button(self, mouse_pos):
        button_clicked = self.upgrade_button.rect.collidepoint(mouse_pos)
        if button_clicked and self.stats.game_active:
            self._upgrade_level()

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

        if pygame.sprite.spritecollideany(self.rectangle, self.bullets):
            self._rectangle_hit()
        self._update_score()

    def _update_score(self):
        if self.stats.score > self.stats.high_score:
            self.stats.high_score = self.stats.score
        self.sb.prep_score()
        self.sb.prep_high_score()

    def _check_rectangle_edges(self):
        if self.rectangle.check_edges():
            self._change_rectangle_direction()

    def _change_rectangle_direction(self):
        self.settings.rectangle_direction *= -1

    def _fire_bullet(self):
        self.stats.bullet_amount += 1  # 统计发射子弹数目
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
                self.sb.prep_heart()

    def _check_missed(self):
        self.stats.rectangle_missing = self.stats.bullet_amount - self.stats.number_of_hits
        if self.stats.rectangle_missing > self.settings.rectangle_missing_allowed:
            self.space_ship.center_ship()
            self.bullets.empty()
            self.stats.reset_stats()

            sleep(0.5)

    def _rectangle_hit(self):
        for bu in self.bullets.copy():
            self.bullets.remove(bu)
            self.stats.number_of_hits += 1
            self._check_hit()
            self.stats.score += self.settings.hit_points
            break

    def _check_hit(self):
        if self.stats.number_of_hits % 5 == 0 and self.stats.number_of_hits > 0:
            self._upgrade_level()

    def _upgrade_level(self):
        self.settings.increase_speed()
        self.stats.level += 1
        self.sb.prep_level()

    def _update_screen(self):
        self.screen.fill(self.settings.bg_color)
        self.space_ship.blitem()
        for bullet in self.bullets.sprites():
            bullet.draw_bullet()
        self.rectangle.draw_rectangle()
        self.bar.draw_bar()
        if not self.stats.game_active:
            self.play_button.draw_button()
        if self.stats.game_active:
            self.reset_button.draw_button()
            self.upgrade_button.draw_button()
            self.sb.show_score()

        pygame.display.flip()


if __name__ == '__main__':
    ai = Move()
    ai.run_game()
