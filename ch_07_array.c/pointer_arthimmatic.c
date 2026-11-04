#include <stdio.h>

int main(){
int a=8;
int *ptr = &a;
printf("the value of a is %d\n the address of this value is %u\n", a, ptr);
printf("the address of this value is %u\n", &a);
ptr++;
printf("the increament address of this value is %u\n",ptr);
    return 0;
}