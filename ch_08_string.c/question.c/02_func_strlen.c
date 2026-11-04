#include <stdio.h>
//#include <string.h>
int mystrlen(char st[] ){
int i=0, count;
char c= st[i];
while (c !='\0')
{
    c= st[i];
  i++;
} count = i-1;
return count;
}
int main(){
char st[]= "priyanshu";
printf("%d\n", mystrlen(st));
    return 0;
}