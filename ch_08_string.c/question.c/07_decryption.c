#include <stdio.h>
#include <string.h>
int main(){
char st[]="ifmm!xpsme";
for (int i = 0; i < strlen(st); i++)
{
   st[i]=st[i]-1;
}
printf("%s\n", st);


return 0;
}