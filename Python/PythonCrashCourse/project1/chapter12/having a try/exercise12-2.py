import sys
import pygame


class Role:
    def __init__(self, im_show):
        self.screen = im_show.screen
        self.screen_rect = im_show.screen.get_rect()

        self.image = pygame.image.load('Zagreus.bmp')
        self.rect = self.image.get_rect()
        self.rect.center = self.screen_rect.center

    def blitme(self):
        self.screen.blit(self.image, self.rect)


class Image:
    def __init__(self):
        pygame.init()

        self.screen = pygame.display.set_mode((1200, 800))
        pygame.display.set_caption("A Game Role")

        self.role = Role(self)

    def run_game(self):
        while True:
            self._check_events()
            self._update_screen()

    def _check_events(self):
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                sys.exit()

    def _update_screen(self):
        self.screen.fill((0, 48, 48, 15))
        self.role.blitme()

        pygame.display.flip()


if __name__ == '__main__':
    image = Image()
    image.run_game()
