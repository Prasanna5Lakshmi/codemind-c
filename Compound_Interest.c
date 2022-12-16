#include<stdio.h>
#include<math.h>
int main()
{
    double p,r,t;
    scanf("%lf",&p);
    scanf("%lf",&r);
    scanf("%lf",&t);
    double a=1+r/100;
    printf("%0.2lf",float((p*pow(a,t))-p));
    return 0;
}
