#include <stdio.h>
#include <string.h>
int main(){
    int contains=0;
    int c= 'g';
    char st[]="pppppprish";
for (int i = 0; i < strlen(st); i++)
{
  if (st[i]==c){
    contains = 1;
  }  break;
}
if (contains){
    printf("yes !! it contains.. \n"); 
}
else {
    printf("no!! it does not contain.., \n");
    
}

    return 0;
}