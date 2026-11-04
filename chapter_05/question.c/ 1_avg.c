#include <stdio.h>
//using function avg of two num
float avg(int a,int b, int c);

float avg(int a,int b, int c) {
    return (a+b+c)/3 ;
}

int main(){
int a,b,c,d;
a=27;
b=66;
c=57;
d = avg(a,b,c);
printf("%d", d);

    return 0;
}