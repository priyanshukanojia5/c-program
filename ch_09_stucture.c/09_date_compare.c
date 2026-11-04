#include <stdio.h>
struct date
{
    int dd;
    int mm;
    int yyyy;
};
int compare(struct date d1, struct date d2)
{
    if ((d1.yyyy == d2.yyyy) && (d1.mm == d2.mm) && (d1.dd == d2.dd))
{
        return 0;
}   
    if (d1.yyyy < d2.yyyy)
    
        return 1;
    
    else if(d1.yyyy > d2.yyyy)
    
        return -1;
    
    else if(d1.mm < d2.mm)
    
        return 1;
    
    else if(d1.mm > d2.mm)
    
        return -1;
    
    else if(d1.dd < d2.dd)
    
        return 1;
    
    else if(d1.dd > d2.dd)
    
        return -1;
}
   

int main()
{
    struct date d1 = {22, 12, 2005};
    struct date d2 = {2, 11, 2006};
    printf("%d \n", compare(d1, d2));

    return 0;
}