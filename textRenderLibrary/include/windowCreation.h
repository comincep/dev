#pragma once

#include "central.h"

typedef struct Window {
    uint16_t width;
    uint16_t height;

    char *framebuffer;
} Window;

Window *createWindow(uint16_t width, uint16_t height);
void destroyWindow(Window *window);
void renderWindow(Window *window);
