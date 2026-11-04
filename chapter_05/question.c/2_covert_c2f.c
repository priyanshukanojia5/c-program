#include <stdio.h>
float celcius(float c);
float celcius(float c){
    return ((c*9)/5) + 32;

}
float ferenhiet(float f);
float ferenhiet(float f){
 return (f - 32) * 5/9;
}

int main(){
float d=55 , a , b;
a=ferenhiet(d);
printf("the ferenhiet of %2f is %2f\n", d , a);
b=celcius(d);
printf("the celcius of %2f id %2f\n",d , b);
    return 0;
}