#include <stdio.h>
#include <stdlib.h>




void grade(int,int);

void p_grade(int,int);

int main()
{


    int num_sub[5]= {};
    int *ptr;

    grade(num_sub,ptr);
    p_grade(num_sub,ptr);

    return 0;
}
grade(int arr[],int *ptr)
{
    ptr=arr;
    printf("enter the grade \n");
    for(int i=0; i<5; i++)
    {

        scanf("%i",ptr);
        ptr++;
    }
}
p_grade(int arr[],int *ptr)
{

    ptr=arr;
    for(int i=0; i<5; i++)
    {

        printf("the grade of student %i is %i\n",i+1,*ptr);
        ptr++;
    }
}







