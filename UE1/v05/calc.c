
#include "calc.h"

// static ist das gleiche wie private

static int num_calls = 0;

static void increase_num_calls(void) {
    num_calls += 1;
}

int get_num_calls(void) {
    return num_calls;
}

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
        increase_num_calls();
    }

    return result; 
}