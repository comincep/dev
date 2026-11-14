#include "../../include/textRenderLibrary.h"
#include <math.h>

#define SCREEN_WIDTH 65
#define SCREEN_HEIGHT 47

float calculateHypotenuse(float x, float y) {
    return sqrtf(x * x + y * y);
}

int main(void) {
    Window *w = createWindow(SCREEN_WIDTH, SCREEN_HEIGHT);
    
    // Triangle creation
    int halfX = roundf((float)SCREEN_WIDTH / 2);
    int halfY = roundf((float)SCREEN_HEIGHT / 2);

    Vector2 v1 = {halfX, halfY};
    Vector2 v2 = {halfX + 15, halfY - 10};
    Vector2 v3 = {halfX + 15, halfY + 10};

    char symbol = '#';
    
    // Distance calculation
    float dx1 = v2.x - v1.x;
    float dy1 = v2.y - v1.y;

    float dx2 = v2.x - v1.x;
    float dy2 = v2.y - v1.y;

    // radius test
    float hyp1 = calculateHypotenuse(dx1, dy1);
    float hyp2 = calculateHypotenuse(dx2, dy2);
    
    // angle between lines
    float angle1 = acosf(dx1 / hyp1);
    float angle2 = acosf(dx2 / hyp2);

    float finalAngle = angle1 + angle2;

    // angle
    float i = 0.0f;

    while (1) {
        resetScreen(w, 60);
        clearScreen(w);

        v2.x = roundf(halfX + cosf(i - angle1 / 2) * hyp1);
        v2.y = roundf(halfY + sinf(i - angle1 / 2) * hyp1);

        v3.x = roundf(halfX + cosf(i + angle2 / 2) * hyp2);
        v3.y = roundf(halfY + sinf(i + angle2 / 2) * hyp2);

        setTriangle(w, v1, v2, v3, symbol);

        renderWindow(w);

        printf("%f \n", hyp1);
        printf("%f \n", hyp2);
        
        i += 0.02f;
    }

    destroyWindow(w);
    return 0;
}
