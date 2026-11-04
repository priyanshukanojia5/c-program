#include <stdio.h>

int main(){
int year;
printf("enter the year\n");
scanf("%d", &year);
if (( year%4==0 && year %100!=0 )|| (year % 100==0))
{
    printf("this is leap year\n");

}
else{
    printf("this is not an leap year");
}    
return 0;
}