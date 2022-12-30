#include <stdio.h>
#include<math.h>
int main() {
    int A,B;
      float sum=0;
      scanf("%d%d",&A,&B);
        for(int i=A; i<=B;i++){
            sum+=sqrt(i);
        
        }
            printf("%.2f",sum);

  return 0;
}