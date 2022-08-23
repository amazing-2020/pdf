import sys
import pygame


class Settings:
    def __init__(self):
        self.screen_width = 1200
        self.screen_height = 800
        self.bg_color = (230, 230, 230)

        self.space_ship_speed = 1.5


class SpaceShip:
    def __init__(self, fly):
        self.screen = fly.screen
        self.settings = fly.settings
        self.screen_rect = fly.screen.get_rect()

        self.image = pygame.image.load('../images/ship.bmp')
        self.rect = self.image.get_rect()

        self.rect.center = self.screen_rect.center

        self.x = float(self.rect.x)
        self.y = float(self.rect.y)

        self.moving_right = False
        self.moving_left = False
        self.moving_up = False
        self.moving_down = False

    def update(self):
        if self.moving_right and self.rect.right < self.screen_rect.right:
            self.x += self.settings.space_ship_speed
        if self.moving_left and self.rect.left > 0:
            self.x -= self.settings.space_ship_speed
        if self.moving_up and self.rect.top > self.screen_rect.top:
            self.y -= self.settings.space_ship_speed
        if self.moving_down and self.rect.bottom < self.screen_rect.bottom:
            self.y += self.settings.space_ship_speed

        self.rect.x = self.x
        self.rect.y = self.y

    def blitem(self):
        self.screen.blit(self.image, self.rect)


class Move:
    def __init__(self):
        pygame.init()
        self.settings = Settings()
        self.screen = pygame.display.set_mode((self.settings.screen_width, self.settings.screen_height))
        pygame.display.set_caption("Move Everywhere")

        self.space_ship = SpaceShip(self)

    def run_game(self):
        while True:
            self._check_events()
            self._update_screen()
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
        if event.type == pygame.KEYDOWN:
            if event.key == pygame.K_RIGHT:
                self.space_ship.moving_right = True
            elif event.key == pygame.K_LEFT:
                self.space_ship.moving_left = True
            elif event.key == pygame.K_UP:
                self.space_ship.moving_up = True
            elif event.key == pygame.K_DOWN:
                self.space_ship.moving_down = True
            elif event.key == pygame.K_q:
                sys.exit()

    def check_keyup_events(self, event):
        if event.type == pygame.KEYUP:
            if event.key == pygame.K_RIGHT:
                self.space_ship.moving_right = False
            elif event.key == pygame.K_LEFT:
                self.space_ship.moving_left = False
            elif event.key == pygame.K_UP:
                self.space_ship.moving_up = False
            elif event.key == pygame.K_DOWN:
                self.space_ship.moving_down = False

    def _update_screen(self):
        self.screen.fill(self.settings.bg_color)
        self.space_ship.blitem()

        pygame.display.flip()


if __name__ == '__main__':
    ai = Move()
    ai.run_game()
