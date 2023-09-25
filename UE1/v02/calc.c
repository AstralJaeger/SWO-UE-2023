#include "calc.h"

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

    return result; 
}