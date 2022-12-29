#include<stdio.h>
int main()
{
    int D,C,A1,A2,A3,B1,B2,B3,t1,t2,s1,s2;
    scanf("%d%d%d%d%d%d%d%d", &D,&C,&A1,&A2,&A3,&B1,&B2,&B3);
    s1=A1+A2+A3;
    s2=B1+B2+B3;
    t1=s1+s2+2*D;
    t2= s1+s2+C;
    if(s1<150){
        t2+=D;
    }
    if(s2<150){
        t2+=D; 
    }
    if(t1>t2)
    {
        printf("YES");
            }
    
    else{
        printf("NO");
        
        
    }
    return 0;
}