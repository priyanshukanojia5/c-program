#include <stdio.h>
//f=m.g
float force(float a);
float force(float a){
    return (a*9.8);
}
int main(){
float a , c;
printf("enter the mass of body:\n");
scanf("%f",&a);
c =force(a);
printf("the force of attreaction %f is %f",a,c);
    return 0;
}