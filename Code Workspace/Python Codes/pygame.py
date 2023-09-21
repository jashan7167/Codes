import pygame
from math import pi

screen = pygame.display.set_mode((1280, 900))

pygame.display.set_caption("Draw Geometry")

cl = pygame.time.Clock()
done = False

while not done:
    cl.tick(10)  # sets the framerates 10 frames per second

    for i in pygame.event.get():
        if i.type == pygame.QUIT:
            done = True
            pygame.quit()
    if not done:
        screen.fill((0, 0, 0))
        pygame.draw.line(screen, (0, 255, 0), [0,0], [20, 40], 10)
