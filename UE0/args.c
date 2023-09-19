#include "stdio.h"
#include "math.h"

int main(int argc, char* argv[]) {

    printf("Argument count: %i\n", argc);

    printf("Arguments:\n");
    unsigned int i;
    for (i = 0; i < argc; i++) {
        printf(" %2i: %s\n", i, argv[i]);
    }

    return 0;
}