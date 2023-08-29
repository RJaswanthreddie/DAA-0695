#include<stdio.h>  
 int main()    
{    
int n, sum=0, r;    
printf("Enter a number: ");    
  scanf("%d", &n);    
  while(n > 0)    
  {    
     r=n%10;    
     sum=sum*10+r;    
     n/=10;    
  }    
  printf("Reversed Number: %d",sum);    
return 0;  
}   
