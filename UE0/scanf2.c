#include "stdio.h"
#include "math.h"

int main(int argc, char** argv) {

    int a = 0;
    int b = 0;
    char op = '+';
    int result = 0;

    printf("Calculate: ");
    scanf("%i %c %i", &a, &op, &b);

    switch (op)
    {
        case '+': result = a + b; break;
        case '-': result = a - b; break;
        case '*': result = a * b; break;
        case '/': result = a / b; break;
        case '%': result = a % b; break;
        case '^': result = pow(a , b); break;
        default:  printf("Unsupported operation %i", op); return 1;
    }
    printf("Result: %i\n", result);
    return 0;
}