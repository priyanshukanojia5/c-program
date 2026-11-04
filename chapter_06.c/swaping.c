#include <stdio.h>
//void swap(int *x,int *y);
void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x = *y;
    *y= temp;
   
}
int main(){
int a, b;
printf("enter the two value\n");
scanf("%d %d", &a,&b);
swap(&a,&b);
printf("the value of a is %d \n and the value of b is %d\n", a,b);
    return 0;
}