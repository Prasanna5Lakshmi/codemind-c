#include<stdio.h>
int main()
{
    int units;
    scanf("%d",&units);
    float bill;
    if(units<=199){
        bill=units*1.20;
    }else if(units>=200 && units<=400)
    {
        bill=units*1.50;
    }
        else if(units>=400 && units<=600)
    {
        bill=units*1.8;
    }
    else {
        bill=units*2.0;
    }
    if(bill>400)
    {
        printf("%0.2f",bill+bill*0.15);
    }
    
        else {
            printf("%0.2f",bill+100.0);
            return 0;
        }
        
    }