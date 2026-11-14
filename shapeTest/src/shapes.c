#include "../include/central.h"

void square(int side, char symbol) {
    for (int y = 0; y < side; y++) {
        for (int x = 0; x < side; x++) {
            printf("%c ", symbol);
        }
        printf("\n");
    }
}
