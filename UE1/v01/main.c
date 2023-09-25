#include <stdio.h>

#include "calc.h"

int main(void) {
    int a, b;
    char op;

    printf("Calc> ");
    scanf("%i %c %i", &a, &op, &b);

    double result = compute(a, b, op);

    printf("Result: %f\n", result);

    return 0;
}