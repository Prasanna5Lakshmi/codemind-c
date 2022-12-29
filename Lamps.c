#include<stdio.h>
int main()
{
    int N,K,X,Y;
    scanf("%d%d%d%d",&N,&K,&X,&Y);
    if(N==K){
        printf("%d",X*K);
        }
        else if(N>K){
            if(X>Y)
            {
                printf("%d",(X*K)+((N-K)*Y));
                }
                else
                {
                    printf("%d",(X*K)+((N-K)*X));
                }
                return 0;
        }
}