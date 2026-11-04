#include <stdio.h>

int main(){
int fact =1;
int i=1;
int n;
printf("enter the number ");
scanf("%d", &n);
while (i<=n)
{
   fact=fact*i;
   i++ ;
}
printf("the factorial of n number %d is  %d",n,fact);
    return 0;
}