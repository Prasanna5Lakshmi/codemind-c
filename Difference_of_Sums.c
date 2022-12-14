#include<stdio.h>

int main() {
    int n,ns=0,sum=0,sqsum,sub;
    scanf("%d",&n);
    for(int i=1;i<=n;i++) {
        sum+=i;
    }
    sqsum=sum*sum;
    for(int i=1;i<=n;i++) {
        ns+=i*i;
    }
    sub=sqsum-ns;
    printf("%d",sub);
}