/*/
Declare two integer variables: i and sum
Initialize sum = 0
Use a for loop to repeat from i = 1 to i = 50
Inside the loop:
If i is even (i % 2 == 0)
Add i to sum → sum = sum + i
After the loop ends, print the value of sum
Stop */
#include <stdio.h>

int main(){
int i,sum = 0 ;
for ( i = 0; i <=50; i++)
{
    if (i%2==0){
        sum = sum+i;
    }
}
printf("the sum of first 50 num is %d\n",sum);

    return 0;
}