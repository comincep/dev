#include "../include/central.h"

char *convertCharToString(char character) {
    char *newString = malloc(2 * sizeof(char));

    if (newString == NULL) {
        return NULL;
    }

    newString[0] = character;
    newString[1] = '\0';

    return newString;
}
