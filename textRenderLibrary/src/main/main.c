#include "../../include/textRenderLibrary.h"
#include <math.h>

#define SCREEN_WIDTH 65
#define SCREEN_HEIGHT 47

int main(void) {
    Window *w = createWindow(SCREEN_WIDTH, SCREEN_HEIGHT);

    int x = 0;
    int y = 0;

    float i = 0;

    if (w == NULL) {
        return 1;
    }

    Vector2 origin = {32, 24};

    while (1) {
        resetScreen(w, 120);

        x = origin.x + roundf(cosf(i) * 10);
        y = origin.y + roundf(sinf(i) * 10);
        
        setLine(w, origin, (Vector2) {x, y}, '#');

        renderWindow(w);

        i += 0.01f;
    }

    destroyWindow(w);
    return 0;
}
