#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
              int sal[4];
              int sum=0;
              int avr;
                     for(int i=0;i<4;i++)
                        {
                          printf("enter your salary for emp %i\n",i);
                          scanf("%i",&sal[i]);
                        }
                    for(int i=0;i<4 ;i++)
                       {
                            printf("the salary for emp %i is:%i \n",i,sal[i]);
                       }
                    for(int i=0;i<4 ;i++){
                     sum+=sal[i];}
                     printf("\n");
                     printf("the sum of salary is %i \n",sum);
                     avr=sum/4;
                      printf("the average is  %i",avr);*/

    int gra[3][4];
    int sum[3]={};
    float ava[4]={};


    for(int i=0; i<3; i++)
        for(int j=0; j<4; j++)
            scanf("%i",&gra[i][j]);



    for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
        {


            printf(" i=%i j= %i %i\t",i,j,gra[i][j]);
        printf("\n");
        sum[i]+=gra[i][j];
        ava[j]+=gra[i][j];
        }
    }




    for(int y=0; y<3; y++)
    {

        printf("the sum stdent grade %i is =%i\n",y,sum[y]);
    }
    for(int z=0; z<4; z++)
    {
        ava[z]=ava[z]/4;
        printf("the grade of subject %i is =%f\n",z,ava[z]);

    }






    int size;


    printf("Enter size of the array\n  ");
    scanf("%i",&size);
    int mn[size];
    int max;
    int min;
    printf("Enter elements in array \n ");
    for(int i=0; i<size; i++)
    {
        scanf("%i",&mn[i]);
    }
    min=max=mn[0];
    for(int i=0 ; i<size; i++)
    {
        if(min>mn[i])
            min=mn[i];
        if(max<mn[i])
            max=mn[i];
    }
    printf("minimum of array is : %i",min);
    printf("\n maximum of array is : %i",max);


    return 0;
}
