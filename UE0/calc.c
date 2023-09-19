#include <math.h>

#include "calc.h"


int compute(int a, int b, char op) {
    switch (op)
    {
        case '+': return a + b; 
        case '-': return a - b ; 
        case '*': return a * b; 
        case '/': return a / b; 
        case '%': return a % b; 
        case '^': return pow(a , b); 
        default:  return 0;
    }
}