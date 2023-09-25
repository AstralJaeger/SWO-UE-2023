#include <stdio.h>
#include <stdbool.h>

#include "calc.h"

int main(void) {
    int a, b;
    char op;
    _Bool ok;

    while (true) {
        printf("Calc> ");
        scanf("%i %c %i", &a, &op, &b);

        double result = compute(a, b, op, &ok);

        if (ok) {
            printf("Result #%i: %f\n", num_calls, result);
        } else {
            printf("Invalid input\n");
        }

        num_calls = 1;
    }

    return 0;
}