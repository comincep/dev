#include "../include/central.h"

Window *createWindow(uint16_t width, uint16_t height) {
    Window *window = malloc(sizeof(Window));
    
    window->width = width;
    window->height = height;

    if (window == NULL) {
        return NULL;
    }

    return window;
}

void destroyWindow(Window *window) {
    free(window);
}
