import sys
import pygame
from pygame.sprite import Sprite


class Settings:
    def __init__(self):
        self.screen_width = 1200
        self.screen_height = 800
        self.bg_color = (230, 230, 230)

        self.rain_speed = 5


class Rain(Sprite):
    def __init__(self, st_game):
        super().__init__()
        self.screen = st_game.screen
        self.settings = st_game.settings

        self.image = pygame.image.load('rain3.svg')
        self.rect = self.image.get_rect()

        self.rect.x = self.rect.width
        self.rect.y = self.rect.height

    def check_edge(self):
        screen_rect = self.screen.get_rect()
        print(self.rect.top)
        if self.rect.top <= screen_rect.bottom:
            return True
        else:
            sys.exit()


class RainInvasion:
    def __init__(self):
        pygame.init()
        self.settings = Settings()

        self.screen = pygame.display.set_mode((self.settings.screen_width, self.settings.screen_height))
        pygame.display.set_caption("Rain Invasion")

        self.rains = pygame.sprite.Group()

        self._create_fleet()

    def run_game(self):
        while True:
            self._check_events()
            self._update_rain()
            self._update_screen()

    def _check_events(self):
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                sys.exit()
            elif event.type == pygame.KEYDOWN:
                self.check_keydown_events(event)

    def check_keydown_events(self, event):
        if event.key == pygame.K_q:
            sys.exit()

    def _update_rain(self):
        self._check_fleet_edges()
        self.rains.update()

    def _create_fleet(self):
        rain = Rain(self)
        rain_width, rain_height = rain.rect.size
        available_space_x = self.settings.screen_width - (2 * rain_width)
        number_rains_x = available_space_x // (2 * rain_width)

        available_space_y = self.settings.screen_height
        number_rows = available_space_y // (2 * rain_height)

        for row_number in range(number_rows):
            for rain_number in range(number_rains_x):
                self._create_rain(rain_number, row_number)

    def _create_rain(self, rain_number, row_number):
        rain = Rain(self)
        rain_width, rain_height = rain.rect.size
        rain.x = rain_width + 2 * rain_width * rain_number
        rain.rect.x = rain.x
        rain.rect.y = rain.rect.height + 2 * rain.rect.height * row_number
        self.rains.add(rain)

    def _check_fleet_edges(self):
        for rain in self.rains.sprites():
            if rain.check_edge():
                self._move_down()
                break

    def _move_down(self):
        for rain in self.rains.sprites():
            rain.rect.y += self.settings.rain_speed

    def _update_screen(self):
        self.screen.fill(self.settings.bg_color)

        self.rains.draw(self.screen)
        pygame.display.flip()


if __name__ == '__main__':
    ra = RainInvasion()
    ra.run_game()
