#include <stdio.h>

#define MAX_SIZE 5


int main(void) {
    int a[MAX_SIZE] = { 0, 0, 0, 0, 0 };
    int i = 0;

    for (i = 0; i < MAX_SIZE; ++i) {
        printf("%i: %i\n", i, a[i]);
    }

    return 0;
}