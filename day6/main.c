#include <stdio.h>
#include <stdlib.h>
struct emp
{
    int id;
    char name[10];
    int sal;
    char mob [12];

};
int main()
{

    struct emp emp_arr[3];
  /*
    for(int i=0; i<3; i++)
    {
        printf("enter id of emp %i\n",i+1);
        scanf("%i",&emp_arr[i].id);
        printf("enter name of emp %i\n",i+1);
        scanf("%s",emp_arr[i].name);
        printf("enter salary of emp %i\n",i+1);
        scanf("%f",&emp_arr[i].sal);
        printf("enter mobile of emp %i\n",i+1);
        scanf("%s",emp_arr[i].mob);
    }

    for(int i=0; i<3; i++)
    {
        printf("\t id     of emp %i is %i\n",i+1,emp_arr[i].id);
        printf("\t name   of emp %i is %s\n",i+1,emp_arr[i].name);
        printf("\t salary of emp %i is %i\n",i+1,emp_arr[i].sal);
        printf("\t mobile of emp %i is %s\n",i+1,emp_arr[i].mob);
        printf("\n\n\n");
    }*/


    struct emp *emp_ptr;
    emp_ptr=emp_arr;
    for(int i=0; i<3; i++)
    {
        printf("enter id of emp %i\n",i+1);
        scanf("%i",&emp_ptr[i].id);
        printf("enter name of emp %i\n",i+1);
        scanf("%s",emp_ptr[i].name);
        printf("enter salary of emp %i\n",i+1);
        scanf("%f",&emp_ptr[i].sal);
        printf("enter mobile of emp %i\n",i+1);
        scanf("%s",emp_ptr[i].mob);
        emp_ptr++;
    }

    emp_ptr=emp_arr;
    for(int i=0; i<3; i++)
    {
        printf("\t id     of emp %i is %i\n",i+1,emp_ptr->id);
        printf("\t name   of emp %i is %s\n",i+1,emp_ptr->name);
        printf("\t salary of emp %i is %f\n",i+1,emp_ptr->sal);
        printf("\t mobile of emp %i is %s\n",i+1,emp_ptr->mob);
        printf("\n\n\n");
        emp_ptr++;

    }








    return 0;
}
