#include<stdio.h>
int main()
{
    int A,B,C,a,b,c;
    scanf("%d%d%d",&A,&B,&C);
    a=A+B;
    b=B+C;
    c=C+A;
    if( a>b && a>c){
        printf("%d",a);
    }
      else if(b>c)
      {
          printf("%d",b);
      }
      else {
          printf("%d",c);
      }
          return 0;
      }
      