import sys
import pygame


class BackgroudColor:
    def __init__(self):
        pygame.init()

        self.screen = pygame.display.set_mode((1200, 800))
        pygame.display.set_caption("Alien Invasion")

    def run_game(self):
        while True:
            self._check_events()
            self._update_screen()

    def _check_events(self):
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                sys.exit()

    def _update_screen(self):
        self.screen.fill((99, 80, 250))

        pygame.display.flip()


if __name__ == '__main__':
    bc = BackgroudColor()
    bc.run_game()
