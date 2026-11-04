// initialization of array
#include <stdio.h>
int main(){
    int n[9];
    printf("enter the marks of students:\n");
    for (int i = 1; i <= 9; i++)
    {
       scanf("%d",&n[i]);
    }
     for (int i = 1; i <= 9; i++)
    {
       printf("the value at index %d is %d\n", i, n[i]);
    }
    return 0;
}