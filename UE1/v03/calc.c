#include "calc.h"

#include <stdio.h>

double compute(int a, int b, char op, _Bool* ok) {
    static int num_calls = 0;

    double result = 0;

    *ok = true;

    switch (op)
    {
        case '+': 
            result = (double)a + b;
            break;
        case '-': 
            result = (double)a - b;
            break;
        case '*': 
            result = (double)a * b;
            break;
        case '/': 
            result = (double)a / b;
            break;
        default: 
            result = 0;
            *ok = false;
    }

    if (*ok) {
        num_calls += 1;
        printf("Number of calls: %i\n", num_calls);
    }

    return result; 
}