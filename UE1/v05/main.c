#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#include "calc.h"

#define MAX_SIZE 100

int main(void) {
    int a, b;
    char op;
    _Bool ok;
    char input[MAX_SIZE];

    while (true) {
        printf("Calc> ");
        fgets(input, MAX_SIZE, stdin);

        if (strncmp(input, "exit", 4) == 0 || 
            strncmp(input, "quit", 4) == 0) {
            break;
        } else if (sscanf(input, "%i %c %i", &a, &op, &b) == 3) {
            double result = compute(a, b, op, &ok);

            if (ok) {
                printf("Result #%i: %f\n", get_num_calls(), result);
            } else {
                printf("Invalid input\n");
            }
        } else {
            printf("Invalid format\n");
        }
    }

    return 0;
}