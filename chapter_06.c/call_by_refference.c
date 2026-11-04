#include <stdio.h>
int sum(int*,int*);
int sum(int* a,int* b){
    return (*a + *b);
}
int main(){
int x=3,y=5;

printf("the sum of the values is %d", sum(&x,&y));
    return 0;
}
  *b=9 ;
  *a=10;


