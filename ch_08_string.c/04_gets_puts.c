#include <stdio.h>
#include <string.h>
int main(){
char st[40];
fgets (st, 40, stdin);
printf(" %s\n", st);
puts(st);
    return 0;
}