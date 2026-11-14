#include "../include/central.h"

char *charToString(char character) {
    static char string[2];

    string[0] = character;
    string[1] = '\0';

    return string;
}
