#include "../../include/central.h"

int main(int count, char **args) {
    char *character = convertCharToString('\n');
    char *string;

    for (int i = 1; i < count; i++) {
        string = combineStrings(args[i], character);
        print(string);

        free(string);
    }

    free(character);
    return 0;
}
