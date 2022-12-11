#include <stdio.h>
 
int main()
{
    float a, b, h;
    float area;
 
    //printf("Enter the value for two bases & height of the trapezium: 
");
    scanf("%f%f%f", &a, &b, &h);
    area = 0.5 * (a + b) * h ;
    printf("%.4f", area);
    return 0;
}