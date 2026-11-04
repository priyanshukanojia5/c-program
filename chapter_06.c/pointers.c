 #include <stdio.h>
 
 int main(){
 int i =44 ;
 int* j = &i; //j is the pointer pointing towards i
 int** k = &j;
 printf("the address of i is %u\n", &i );
  printf("the address of i is %u\n", *(&j));
    return 0;
 }