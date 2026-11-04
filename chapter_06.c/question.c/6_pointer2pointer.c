#include <stdio.h>

int main(){
int i=1;
int*ptr1=&i;
int**ptr2=&ptr1;
printf("the address of i is %p\n", &i);
printf("the address of i is %d\n", *ptr1);
printf("the address of i is %d\n", **ptr2);
    return 0;
} 