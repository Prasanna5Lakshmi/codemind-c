#include <stdio.h>
int main() 
{
int n1, n2, n3;
scanf("%d %d %d", &n1, &n2, &n3);
if (n1 >= n2 && n1 >= n3)
printf("%.2d", n1);
if (n2 >= n1 && n2 >= n3)
    printf("%.2d", n2);
    if (n3 >= n1 && n3 >= n2)
    printf("%.2d", n3);
}