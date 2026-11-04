#include <stdio.h>
int cbr(int *a);
int cbr(int *a){
   return *a=8;
    
}
int main(){
int c=9;
printf("the value of c is %d\n",cbr(&c));
    return 0;
}