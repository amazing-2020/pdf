import sys
import pygame

from pygame.sprite import Sprite


class Settings:
    def __init__(self):
        self.screen_width = 1200
        self.screen_height = 800
        self.bg_color = (230, 230, 230)

        self.space_ship_speed = 1.5

        self.bullet_speed = 1.0
        self.bullet_width = 15
        self.bullet_height = 3
        self.bullet_color = (60, 60, 60)
        self.bullet_allowed = 60


class Bullet(Sprite):
    def __init__(self, ai_game):
        super().__init__()
        self.screen = ai_game.screen
        self.settings = ai_game.settings
        self.color = self.settings.bullet_color

        self.rect = pygame.Rect(0, 0, self.settings.bullet_width, self.settings.bullet_height)
        self.rect.midleft = ai_game.space_ship.rect.midright

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


class Move:
    def __init__(self):
        pygame.init()
        self.settings = Settings()
        self.screen = pygame.display.set_mode((self.settings.screen_width, self.settings.screen_height))
        pygame.display.set_caption("Shooting")

        self.space_ship = SpaceShip(self)
        self.bullets = pygame.sprite.Group()

    def run_game(self):
        while True:
            self._check_events()
            self._update_screen()
            self._update_bullets()
            self.space_ship.update()

    def _check_events(self):
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                sys.exit()
            elif event.type == pygame.KEYDOWN:
                self.check_keydown_events(event)
            elif event.type == pygame.KEYUP:
                self.check_keyup_events(event)

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

    def _fire_bullet(self):
        if len(self.bullets) < self.settings.bullet_allowed:
            new_bullet = Bullet(self)
            self.bullets.add(new_bullet)

    def _update_bullets(self):
        self.bullets.update()
        #  remove the disappeared bullets
        for bullet in self.bullets.copy():
            if bullet.rect.left > self.settings.screen_width:
                self.bullets.remove(bullet)

    def _update_screen(self):
        self.screen.fill(self.settings.bg_color)
        self.space_ship.blitem()
        for bullet in self.bullets.sprites():
            bullet.draw_bullet()
        pygame.display.flip()


if __name__ == '__main__':
    ai = Move()
    ai.run_game()
