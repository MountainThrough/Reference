#include <stdio.h>
#include "head.h"

int main()
{
    int a = 20;
    int b = 12;
    int c;
    printf("a = %d, b = %d\n", a, b);
    printf("a + b = %d\n", add(a, b));
    c = subtract(a, b);
    printf("c = %d\n", c);
    printf("a - b = %d\n", subtract(a, b));
    printf("a * b = %d\n", multiply(a, b));
    printf("a / b = %f\n", divide(a, b));
    return 0;
}
