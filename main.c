#include <stdio.h>
#include <stdlib.h>
#include "SubMainû.c"

int main()
{
    printf("Hello world!\n");

    int num1, num2;

    printf("Enter first number");

    scanf("%d", &num1);

    printf("Enter second number");

    scanf("%d", &num2);

    int sum = num1 + num2;

    int product = num1 * num2;

    printf("Sum: %d\n", sum);

    printf("Product: %d\n", product);




    return 0;
}
