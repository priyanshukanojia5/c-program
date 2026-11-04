#include <stdio.h>

int main(){
int a,b,c,d;
printf("enter four number\n");
scanf("%d %d %d %d", &a ,  &b, &c, &d);
if(a<b && b>c && b>d ){
    printf("the greatest number is %d\n", b);
}
else if (a>b && b>c && c>d)
 {
 printf("the greatest number is %d\n", a);
 }   
    else if (a<b && b<c && c>d)
 {
    printf("the greatest number is %d\n", c);
 }
 else {
    printf("the greatest number is %d\n", d);
 }
 return 0;
}