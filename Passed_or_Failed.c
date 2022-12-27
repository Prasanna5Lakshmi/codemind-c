#include<stdio.h>
int main()
{
    int  Eng,Math,Phy,Che,CS;
    scanf("%d %d %d %d %d",&Eng,&Math,&Phy,&Che,&CS);
    if(Eng>34 && Math>34 && Phy>34 && Che>34 && CS>34)
    {
        printf("PASSED");
    }
    else
    {
        printf("FAILED");
    }
    return 0;
    }
    