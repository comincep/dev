#include "../include/textRenderLibrary.h"

void setPixel(Window *w, int x, int y, char symbol) {
    if (w == NULL) {
        return;
    }

    w->framebuffer[y * w->width + x] = symbol;
}

void setPixelV(Window *w, Vertex v) {
    if (w == NULL) {
        return;
    }

    w->framebuffer[v.y * w->width + v.x] = v.symbol;
}

void setLine(Window *w, Vector2 v1, Vector2 v2, char symbol) {
    int x0 = v1.x;
    int y0 = v1.y;
    int x1 = v2.x;
    int y1 = v2.y;

    int dx = abs(x1 - x0);
    int dy = abs(y1 - y0);

    int sx = (x0 < x1) ? 1 : -1;
    int sy = (y0 < y1) ? 1 : -1;

    int err = dx - dy;

    while (1) {
        setPixelV(w, (Vertex) {x0, y0, symbol});

        if (x0 == x1 && y0 == y1)
            break;

        int e2 = 2 * err;

        if (e2 > -dy) {
            err -= dy;
            x0 += sx;
        }

        if (e2 < dx) {
            err += dx;
            y0 += sy;
        }
    }
}

void setLineL(Window *w, Line l) {
    int x0 = l.v1.x;
    int y0 = l.v1.y;
    int x1 = l.v2.x;
    int y1 = l.v2.y;

    int dx = abs(x1 - x0);
    int dy = abs(y1 - y0);

    int sx = (x0 < x1) ? 1 : -1;
    int sy = (y0 < y1) ? 1 : -1;

    int err = dx - dy;

    while (1) {
        setPixelV(w, (Vertex) {x0, y0, l.symbol});

        if (x0 == x1 && y0 == y1)
            break;

        int e2 = 2 * err;

        if (e2 > -dy) {
            err -= dy;
            x0 += sx;
        }

        if (e2 < dx) {
            err += dx;
            y0 += sy;
        }
    }
}

void setTriangle(Window *w, Vector2 v1, Vector2 v2, Vector2 v3, char symbol) {
    if (w == NULL) {
        return;
    }

    setLine(w, v1, v2, symbol);
    setLine(w, v2, v3, symbol);
    setLine(w, v3, v1, symbol);
}

void setTriangleT(Window *w, Triangle t) {
    if (w == NULL) {
        return;
    }

    setLine(w, t.v1, t.v2, t.symbol);
    setLine(w, t.v2, t.v3, t.symbol);
    setLine(w, t.v3, t.v1, t.symbol);
}
