#include "../../include/textRenderLibrary.h"
#include <math.h>

#define SCREEN_WIDTH 65
#define SCREEN_HEIGHT 47

int main(void) {
    Window *w = createWindow(SCREEN_WIDTH, SCREEN_HEIGHT);

    if (w == NULL) {
        return 1;
    }

    while (1) {
        resetScreen(w, 5);

        renderWindow(w);
    }

    destroyWindow(w);
    return 0;
}
