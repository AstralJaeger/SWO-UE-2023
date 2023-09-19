#include <stdio.h>
#include <stdlib.h>
#include "calc.h"

void argPrint(int argc, char** argv) {
    int i;
    for (i = 1; i < argc; i++) {
        printf("%s ", argv[i]);
    }
    return;
}

/**
 * Will return 0 when args are valid 1 otherwise
*/
int argCheck(int argc, char** argv) {
    if (argc != 4) {    
        printf("calculator: usage a op b\n");
        if (argc < 4) {
            printf(">   Too few arguments\n");
        }
        if (argc > 4) {
            printf(">   Too many arguments\n");
        }
            printf("    Given: ");
            argPrint(argc, argv);
            printf("\n");
        return 1;
    }
    return 0;
}

int main(int argc, char** argv) {
    
    if (argCheck(argc, argv)) {
        return 1;
    }

    char op = '+';
    sscanf(argv[2], "%c", &op);
    printf("Result: %i\n", compute(atoi(argv[1]), atoi(argv[3]), op));
    return 0;
}