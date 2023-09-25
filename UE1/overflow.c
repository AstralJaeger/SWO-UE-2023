#include <stdio.h>

int main(void) {
    char before[5] = "";
    char str[5]  = "";
    char after[5]  = "";

    printf("before: %s\n", before);
    printf("str: %s\n", str);
    printf("after: %s\n", after);


    scanf("%s", str);

    printf("before: %s\n", before);
    printf("str: %s\n", str);
    printf("after: %s\n", after);

    return 0;
}