#include "stdio.h"
#include "math.h"

int main(int argc, char** argv) {
    if (argc != 4) {
        printf("calculator: usage a op b\n");
        if (argc < 4) {
            printf(">   Too few arguments\n");
        }
        if (argc > 4) {
            printf(">   Too many arguments\n");
        }
        return 1;
    }

    
    int a = atoi(argv[1]);
    int b = atoi(argv[3]);
    char op = '+';
    sscanf(argv[2], "%c", &op);
    double result = 0;

    switch (op)
    {
        case '+': result = a + b + 0.0; break;
        case '-': result = a - b + 0.0; break;
        case '*': result = a * b + 0.0; break;
        case '/': result = a / b + 0.0; break;
        case '%': result = a % b; break;
        case '^': result = pow(a , b); break;
        default:  printf("Unsupported operation %c\n", op); return 1;
    }
    printf("Result: %.2f\n", result);
    return 0;
}