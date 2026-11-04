#include <stdio.h>

int main(){
int arr[]={1,2,3,4,5,6,7,8,9,10};
int *ptr = arr;
printf("the value at address is %p is %d",ptr+2,*(ptr+2)) ;
    return 0;
}