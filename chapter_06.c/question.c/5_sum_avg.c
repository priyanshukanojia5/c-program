#include <stdio.h>

int sum(int *a, int*b);
int sum(int *a, int*b){
    return *a+*b;
}

int avg(int *a, int*b);
int avg(int *a, int*b){
    return (*a+*b)/2;
}

int main(){
int x =5 ,y=9,c,d;

int*ptr1 =&x;
int*ptr2 =&y;
printf("the address of x is %p \n the address of y is %p\n", (void*)&x, (void*)&y);

c=sum(&x,&y);
printf("the sum of two number is %d \n", c);

d= avg(&x , &y);
printf("the avg of two number is %d\n", d);

    return 0;
}