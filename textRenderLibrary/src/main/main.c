#include "../../include/central.h"

int main(void) {
    Window *w = createWindow(25, 25);

    if (w == NULL) {
        return 1;
    }
    
    while (1) {
        resetScreen(w, 1);
        renderWindow(w);
    }

    destroyWindow(w);
    return 0;
}
