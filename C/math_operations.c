#include <stdio.h>

int main()
{
    float a = 0, b = 0, sum = 0, sub = 0, mult = 0, div = 0;

    //printf("Write first number : ");
    //scanf("%f", &a); // when trying to safe number is important to indicate the memory position with "&" to be safe and not only the variable
    //printf("\nWrite second number : "); scanf("%f", &b);
    //also we can read the two numbers at same time with a space or enter between then :
    printf("Write two numbers : ");
    scanf("%f %f", &a, &b);

    sum = a + b;
    printf("Sum : %.1f\t", sum);

    sub = a - b;
    printf("Sub : %.1f\n", sub);

    mult = a * b;
    printf("Mult : %.1f\t", mult);

    div = a / b;
    printf("Div : %.1f", div);

    return 0;
}
