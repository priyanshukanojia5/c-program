#include <stdio.h>
int returning_5(int *ptr){
    printf("the value of ptr is %u\n", &ptr);
    printf("the value at ptr is %d\n", *ptr);
    return 0;
}

int main(){
int i=2;
int *ptr=&i;
returning_5(ptr);
printf("the address of the i is %u\n", &i);
//returning_5(ptr);
    return 0;
}