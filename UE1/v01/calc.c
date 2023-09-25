#include "calc.h"

double compute(int a, int b, char op) {
    double result = 0;

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
    }

    return result; 
}