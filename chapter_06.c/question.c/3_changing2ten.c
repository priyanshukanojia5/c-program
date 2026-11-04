#include <stdio.h>
int changing_to_ten(int*);
int changing_to_ten(int*a){
*a = *a * 10;
}
int main(){
int b=33;
printf("the value of b is %d\n",b);
changing_to_ten(&b);
printf("the value of b when we do it 10 times is %d\n",b);
    return 0;
}