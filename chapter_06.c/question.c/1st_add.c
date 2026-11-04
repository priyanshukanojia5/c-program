#include <stdio.h>

int main(){
int i=2;
int* ptr = &i;
printf("the add of this value is %u\n", &i);
printf("the add of this value is %d\n", *ptr);
    return 0;
}