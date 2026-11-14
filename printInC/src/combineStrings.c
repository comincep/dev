#include "../include/central.h"

char *combineStrings(char *string1, char *string2) {
    static int sizeString1;
    static int sizeString2;
    static int maxSize;

    while (string1[sizeString1] != '\0') {
        sizeString1 += 1;
    }

    while (string2[sizeString2] != '\0') {
        sizeString2 += 1;
    }

    maxSize = sizeString1 + sizeString2 + 1;
    char *string = malloc(maxSize * sizeof(char));
    string[maxSize] = '\0';
    
    for (int i = 0; i < sizeString1; i++) {
        string[i] = string1[i];
    }

    for (int i = 0; i < sizeString2; i++) {
        string[i + sizeString1] = string2[i];
    }

    return string;
}


