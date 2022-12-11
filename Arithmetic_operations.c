#include <stdio.h>
int main()
{
    int num1, num2;
    int sum, sub, mult, mod;
    float div;
     scanf("%d%d", &num1, &num2);
     sum = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    div = (float)num1 / num2;
    mod = num1 % num2;
    printf("Sum : %d
", sum);
    printf("Difference : %d
", sub);
    printf("Product : %d
", mult);
    printf("Quotient : %.2f
",div);
    printf("Remainder : %d", mod);

    return 0; 
}