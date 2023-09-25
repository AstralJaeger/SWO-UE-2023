#include <stdio.h>
#include <stdbool.h>

#include "calc.h"

int main(void) {
    int a, b;
    char op;
    _Bool ok;

    printf("Calc> ");
    scanf("%i %c %i", &a, &op, &b);

    double result = compute(a, b, op, &ok);

    if (ok) {
        printf("Result: %f\n", result);
    } else {
        printf("Invalid input\n");
    }

    return 0;
}