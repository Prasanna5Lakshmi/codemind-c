#include<stdio.h>  
int main()    
{    
 int i,fact=1,number;    
 scanf("%d",&number);    
    for(i=1;i<=number;i++){    
      fact=fact*i;    
  }    
  printf("%d",fact);    
return 0;  
}   