#include <stdio.h>

int main(){
     char ch = 'D';
     printf("the value of character is :%D\n",ch );
//97 ,122
if(ch >=97 && ch<=122)
{
    printf("the character is lower case\n");
}
else{
    printf("the value is upper case\n");
}
return 0;
}