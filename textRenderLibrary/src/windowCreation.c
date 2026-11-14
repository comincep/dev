#include "../include/windowCreation.h"

Window *createWindow(uint16_t width, uint16_t height) {
    if (width == 0 || height == 0) {
        return NULL;
    }

    Window *window = malloc(sizeof(Window));
    
    if (window == NULL) {
        return NULL;
    }

    window->width = width;
    window->height = height;

    window->framebuffer = malloc((size_t)(width * height) * sizeof(char));

    if (window->framebuffer == NULL) {
        free(window);
        return NULL;
    }

    memset(window->framebuffer, ' ', (size_t)width * height);
    return window;
}

void destroyWindow(Window *window) {
    if(window == NULL) {
        return;
    }

    free(window->framebuffer);
    free(window);
}

void renderWindow(Window *window) {
    if (window == NULL) {
        return;
    }

    for (int y = 0; y < window->height; y++) {
        for (int x = 0; x < window->width; x++) {
            putchar(window->framebuffer[y * window->width + x]);
            putchar(' ');
        }
        putchar('\n');
    }
}

void resetScreen(Window *w, float FPS) {
    if (w == NULL) {
        return;
    }

    printf("\033[H");

    usleep(1000000 / FPS);
}

void clearScreen(Window *w) {
    if (w == NULL) {
        return;
    }

    memset(w->framebuffer, ' ', (size_t)w->width * w->height);
}
