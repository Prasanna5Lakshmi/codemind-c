#include <stdio.h>
int main() {
    int A,B,X,Y,sum=0;
      scanf("%d%d%d%d",&A,&B,&X,&Y);
        for(int i=A; i<=B;i++){
            if(i%X==0 && i%Y!=0){
            sum+=i;
        }
        }
            printf("%d",sum);

  return 0;
}