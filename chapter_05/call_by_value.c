#include <stdio.h>
int change(int a , int b);
int change(int a,int b){
a =(38);
return a+b;
}
//a will just copy b not change the value of b

int main(){
   int  a=8,b=3 ,c;
   c=change (a,b);
   printf("b is %d ", c) ;
   
    return 0;
}