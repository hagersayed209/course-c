#include <stdio.h>
#include <stdlib.h>

int main()
{  int base ;
    int y;
    printf("enter the number of base\n");
    scanf("%i",&base);
    printf("enter the number of power\n");
    scanf("%i",&y);
    int res;
    res=power(base,y);

    printf("the value is %i",power(base,y));



    return 0;
}
int power (int base,int n)
{
    if(n==0)
    {
        return 1;
    }
    else if(n==1)
    {
        return base;
    }
    else if(n>0)
    {
        return base* power(base,n-1);
    }
}
