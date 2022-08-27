import sys
from time import sleep
import pygame

from pygame.sprite import Sprite


class Settings:
    def __init__(self):
        self.screen_width = 1200
        self.screen_height = 800
        self.bg_color = (230, 230, 230)

        self.space_ship_speed = 1.5
        self.space_ship_limit = 5

        self.bullet_speed = 1.5
        self.bullet_width = 15
        self.bullet_height = 3
        self.bullet_color = (60, 60, 60)
        self.bullet_allowed = 60

        self.alien_speed = 1
        self.fleet_drop_speed = 5
        self.fleet_direction = 1


class GameStates:
    def __init__(self, fly):
        self.settings = fly.settings
        self.reset_stats()

        self.alien_killed = 0
        self.space_ship_hitted = 0
        self.game_active = True

    def reset_stats(self):
        self.space_ship_left = self.settings.space_ship_limit


class Alien(Sprite):
    def __init__(self, ai_game):
        super().__init__()
        self.screen = ai_game.screen
        self.settings = ai_game.settings

        self.image = pygame.image.load('../images/alien2.bmp')
        self.rect = self.image.get_rect()

        self.rect.x = self.rect.width
        self.rect.y = self.rect.height

        self.y = float(self.rect.y)

    def check_edges(self):
        self.screen_rect = self.screen.get_rect()
        if self.rect.bottom >= self.screen_rect.bottom or self.rect.top <= 0:
            return True

    def update(self):
        self.y += (self.settings.alien_speed * self.settings.fleet_direction)
        self.rect.y = self.y


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
        self.bullets = pygame.sprite.Group()
        self.aliens = pygame.sprite.Group()

        self._create_fleet()

    def run_game(self):
        while True:
            self._check_events()

            if self.status.game_active:
                self.space_ship.update()
                self._update_bullets()
                self._update_alien()

            self._update_screen()

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

    def _update_alien(self):
        self._check_fleet_edges()

        if pygame.sprite.spritecollideany(self.space_ship, self.aliens):
            self._ship_hit()

        self.aliens.update()

    def _create_fleet(self):
        alien = Alien(self)
        alien_width, alien_height = alien.rect.size
        ship_width = self.space_ship.rect.width
        available_space_x = self.settings.screen_width - (3 * alien_width) - ship_width
        number_aliens_x = available_space_x // (2 * alien_width)

        available_space_y = self.settings.screen_height - alien_height
        number_rows = available_space_y // (2 * alien_height)
        for alien_number in range(number_aliens_x):
            for row_number in range(number_rows):
                self._create_alien(alien_number, row_number)

    def _create_alien(self, alien_number, row_number):
        alien = Alien(self)
        alien_width, alien_height = alien.rect.size

        alien.rect.x = self.settings.screen_width - 2 * alien_width * alien_number - alien_width
        alien.y = alien.rect.height + 2 * alien.rect.height * row_number  #
        alien.rect.y = alien.y  # this way of writing can only be used for the inner loops, here is 'row_number'

        self.aliens.add(alien)

    def _check_fleet_edges(self):
        for alien in self.aliens.sprites():
            if alien.check_edges():
                self._change_fleet_direction()
                break

    def _change_fleet_direction(self):
        for alien in self.aliens.sprites():
            alien.rect.x -= self.settings.fleet_drop_speed
        self.settings.fleet_direction *= -1

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

        self._check_bullet_alien_collisions()

    def _check_bullet_alien_collisions(self):
        collisions = pygame.sprite.groupcollide(self.bullets, self.aliens, True, True)
        if len(collisions) != 0:
            self.status.alien_killed += 1
            print(self.status.alien_killed)
        if not self.aliens:
            self.bullets.empty()
            self._create_fleet()

    def _ship_hit(self):
        self.status.space_ship_hitted += 1
        if self.status.space_ship_left > 0:
            self.status.space_ship_left -= 1

            self.aliens.empty()
            self.bullets.empty()

            self._create_fleet()
            self.space_ship.center_ship()

            sleep(0.5)
        else:
            self.status.game_active = False

    def _check_aliens_bottom(self):
        screen_rect = self.screen.get_rect()
        for alien in self.aliens.sprites():
            if alien.rect.bottom >= screen_rect.bottom:
                self._ship_hit()
                break

    def _update_screen(self):
        self.screen.fill(self.settings.bg_color)
        self.space_ship.blitem()
        for bullet in self.bullets.sprites():
            bullet.draw_bullet()
        self.aliens.draw(self.screen)

        pygame.display.flip()


if __name__ == '__main__':
    ai = Move()
    ai.run_game()
