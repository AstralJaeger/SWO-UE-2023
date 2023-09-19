#include "stdio.h"

int main(int argc, char** argv) {
    int i = 2;

    while (i < 100) {
        i *= 2;
    }

    printf("i is %i\n", i);

    return 0;
}