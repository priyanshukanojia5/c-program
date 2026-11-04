#include <stdio.h>

int main(){
int n[]={23,43,42};
int *ptr=n;
for (int i = 0; i < 3; i++)
{
    printf("the value of this variable is %d\n",n[i]);
}
for (int i = 0; i < 3; i++)
{
    printf("the value of this variable is %d\n",*ptr);
    ptr++;
}

    return 0;
}