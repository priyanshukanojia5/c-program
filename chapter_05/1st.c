#include <stdio.h>
int sum(int x,int y)
 {
   // printf("the sum is %d\n", x+y);
    return x+y;
}
int main(){
int a , b , c1,c;
printf("enter two n");
scanf("%d%d",&a ,&b);
 c = sum(a,b);
printf("%d\n",c);
int a1= 3 , b2=5;
c1 = sum(a1 , b2);
printf("%d\n",c1);
    return 0;
}