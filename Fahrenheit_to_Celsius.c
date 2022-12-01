#include<stdio.h>
int main()
{
    float c,fh;
   // printf("enter the temperature in centigrade
 ");
    scanf("%f",&c);
    fh=((c-32)*5/9);
    printf("%.2f",fh);
    
}