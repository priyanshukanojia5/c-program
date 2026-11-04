#include <stdio.h>
//fibonacci 0,1,1,2,3,5,8 .........
int fibonacci(int n);
int fibonacci(int n){
if(n==1 || n==2){
return (n-1);
} 
return fibonacci(n-1)+fibonacci(n-2);
}

int main(){
int a , c;
printf("enter the number:\n");
scanf("%d",&a);
c = fibonacci(a);
printf("the valaue of fibonacci series  %d is %d",a,c);
    return 0;
}