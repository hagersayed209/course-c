#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* int x;
     printf("enter the number\n");
     scanf("%i",&x);
     int result;
     result=factorial(x);
     printf("%i",result\n);*/






    return 0;
}

int factorial(int n)
{
    if(n==0||n==1)
    {
        return 1;
    }
    else if(n>1)
    {
        return n*factorial(n-1);
    }
    else
    {
        printf("number must be positive");
        return -1;
    }

}






