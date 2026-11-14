#include "../../include/central.h"

int main() {
    Window *w = createWindow(50, 50);
    renderWindow(w);
    destroyWindow(w);
    return 0;
}
