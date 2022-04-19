#include <stdio.h>
#include <stdlib.h>

int calaulate_sum(int,int );


void swap(int *,int *);





int main()
{
    /*
     int num1,num2,res;
                printf("enter first number\n");
                scanf("%i",&num1) ;
                printf("enter anther number\n");
                scanf("%i",&num2) ;
        res= calaulate_sum(num1,num2);
               printf ("the sum of number is \t= %i",res);

    int g=10,r=13;

    //swap( g ,r );
    //printf("g=%i\t r=%i",g,r);
     printf("g=%i\t r=%i\n",g,r);
    swap( &g,&r );
    printf("g=%i\t r=%i\n",g,r);*/





















    return 0;
}
int calaulate_sum(int a,int b)
{
    int sum=a+b;
    return sum;
}
/*void swap(int x,int y)
{
    printf("the value of g = %i\t& r = %i\n ",x,y);
    int z;
    z=x;
    x=y;
    y=z;
    printf("the value of g = %i\t & r = %i\n ",x,y);

}*/
void swap(int*x,int*y)
{
    printf("the value of g = %i\t& r = %i\n ",x,y);
    int z;
    z=*x;
    *x=*y;
    *y=z;
    printf("the value of g = %i\t & r = %i\n ",*x,*y);
}

