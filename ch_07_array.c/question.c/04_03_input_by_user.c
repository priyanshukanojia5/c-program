#include <stdio.h>

int main(){
int n;
scanf("%d",&n);
int a[10];
for (int i = 0; i < 10; i++)
{
   a[i]= n * (i+1);
}
for (int i = 0; i < 10; i++)
{
printf("the value of %d is %d x %d = %d \n",n,n,i+1 , a[i]);
}
    return 0;
}