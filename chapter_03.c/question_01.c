 #include <stdio.h>
 
 int main(){
 int m1,m2,m3,m4 ;
 printf("enter the number of mrks in each subject:\n");
 scanf("%d",&m1);
 printf("enter the number of mrks in each subjec:\n");
 scanf("%d",&m2);
 printf("enter the number of mrks in each subject:\n");
 scanf("%d",&m3);
 printf("enter the number of mrks in each subject:\n");
 scanf("%d",&m4);
 printf("the given marks are %d %d %d and %d :\n", m1,m2,m3, m4 );
  if(m1<33 || m2<33 || m3<33 || m4<33)
  {
   printf("you r failed due to less marks in individual subject\n");
  }
  else if ((m1+m2+m3+m4)/4<40)
  {
   printf("you are failed due to less marks \n");
  }
  else {
   printf("you r passed!!\n");
  }
  return 0;
 }