#include <stdio.h>
int main()
{
   int n, i, count = 0;
   scanf("%d",&n);
     for(i=2; i<=n;i++)
    {
        // check for non prime number
        if(n%i==0)
        {
            count++;
            }}
    if (count==1){
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
}
 return 0;    
}
