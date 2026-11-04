#include <stdio.h>
#include <string.h>
int main(){
//char st[] = "priyanshu was playing cricket otd";
//printf("%lu\n", strlen(st)); // it is useed to measure lenght 
//char target[300];
//strcpy(target , st); //it copy the string into another string
//printf("%s\n %s \n", target , st);
//char s1[18]="virat";
//char s2[18]=" kohli ";
//strcat(s1,s2);
//printf("%s \n",s1);
char a1[44]="virat ";
char a2[44]="kohli";
int result = strcmp(a1,a2); 
//strcmp() compares two strings and tells whether they are equal or which one comes first is negative by ascii value .
printf("%d \n", result);

    return 0;
}