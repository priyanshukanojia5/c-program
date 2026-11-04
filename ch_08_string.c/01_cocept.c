#include <stdio.h>

int main(){
//char st[] = {'a','b','c','\0'};
char st[]= "abcd"; //same as upper statement // we don't use null char coz we use double qoutes //
for (int i = 0; i < 3; i++)
{
  printf("character is %c\n", st[i]);
  
}
    return 0;
}