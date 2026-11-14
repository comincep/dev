#pragma once

#include "dependencies.h"
#include "textRenderLibrary.h"

typedef struct Vector2 {
    uint16_t x;
    uint16_t y;
} Vector2;

typedef struct Vertex {
    uint16_t x;
    uint16_t y;

    char symbol;
} Vertex;

typedef struct Line {
    Vector2 v1;
    Vector2 v2;

    char symbol;
} Line;

typedef struct Triangle {
    Vector2 v1;
    Vector2 v2;
    Vector2 v3;

    char symbol;

} Triangle;

void setPixel(Window *w, int x, int y, char symbol);
void setPixelV(Window *w, Vertex v);

void setLine(Window *w, Vector2 v1, Vector2 v2, char symbol);
void setLineL(Window *w, Line l);

void setTriangle(Window *w, Vector2 v1, Vector2 v2, Vector2 v3, char symbol);
void setTriangleT(Window *w, Triangle t);
