#include<stdio.h>
int main()
{
    float bs,hra,da;
    scanf("%f%f%f", &bs,&hra,&da);
    float pf= bs *0.12;
    printf("%.2f
%.2f",pf,bs+hra+da+pf);
    return 0;
}