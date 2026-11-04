#include <stdio.h>
struct vector{
    int i;
    int j;
};

struct vector vectorsum(struct vector v1, struct vector v2)
{
    struct vector v3 = {v1.i + v2.i, v1.j + v2.j};
    return v3;
};
int main(){
struct vector v1 = {2,6};
struct vector v2 = {9,3};
struct vector v3 = vectorsum(v1,v2);
printf("the sum of two vector is %di + %dj \n", v3.i , v3.j);
    return 0;
}

 /*(second way )
#include <stdio.h>
typedef struct vector{
    int i;
    int j;
}v ;

v vectorsum(v v1, v v2)
{
    v v3 = {v1.i + v2.i, v1.j + v2.j};
    return v3;
};
int main(){
v v1 = {2,6};
v v2 = {9,3};
v v3 = vectorsum(v1,v2);
printf("the sum of two vector is %di + %dj \n", v3.i , v3.j);
    return 0;
} */