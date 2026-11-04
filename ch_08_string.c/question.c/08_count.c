#include <stdio.h>
#include <string.h>
int main(){
    int count=0;
    int c= 'p';
    char st[]="pppppprish";
for (int i = 0; i < strlen(st); i++)
{
  if (st[i]==c){
    count++;
  }  
}
printf("%d \n", count);

    return 0;
}