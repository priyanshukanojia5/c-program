#include <stdio.h>

int main(){
char st[6];
   // scanf("%s", st);
   // printf("%s\n", st);

for (char i = 0; i < 6; i++)
{
  scanf("%c", &st[i]);
}

for (char i = 0; i < 6; i++)
{
 printf("%c\n", st[i]);
}

    return 0;
}