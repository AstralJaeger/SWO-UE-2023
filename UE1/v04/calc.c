
#include "calc.h"

int num_calls = 0;


double compute(int a, int b, char op, _Bool* ok) {


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
    }

    return result; 
}