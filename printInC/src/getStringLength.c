#include "../include/central.h"

long int getStringLength(char *string) {
    long int size = 0;

    while (string[size] != '\0') {
        size += 1;
    }

    return size;
}
