#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#define null -32
#define NormalText   15
#define HighligtText 765
void textattr(int i)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i);

}

struct emp
{
    int id;
    char name[10];
    int sal;
    char mob [12];

};

int main()
{


//struct x emp[1]={0,"",0,""};
    char p;
    int size=5;
    int quitflag=0;
    int current_item=0;
    char  menu[6][12]= {"ADD","DISPLAY","DISPLAYALL","update","delete","exit"};
    int emparr_size=6;
    // struct emp emparr[6];
    struct emp*Emp_ptr;
    Emp_ptr=malloc(sizeof(struct emp)*emparr_size);
    do
    {

        Displaymenu(menu,size,current_item);

        char p=getch();
        switch(p)
        {
        case -32:
            p=getch();
            switch(p)
            {
            case 72:
                if(current_item>0)
                {
                    current_item--;
                }
                break;
            case 80:
                if(current_item<6)
                {
                    current_item++;
                }
                break;
            case 77:
                current_item=0;
                break;

            case 75:

                current_item=5;


                break;


            }
            break;

        case 13:
            switch(current_item)
            {
            case 0:
                system("cls");
                printf("ADD EMPLOYEE\n");
                AddAllEMP(Emp_ptr,emparr_size);

                getch();
                break;
            case 1:
                system("cls");
                printf("display\n");
                display(Emp_ptr,emparr_size);
                getch();
                break;
            case 2:
                system("cls");
                displayall(Emp_ptr,emparr_size);
                getch();

                break;
            case 3:
                system("cls");
                update_emp(Emp_ptr,emparr_size);
                getch();

                break;
            case 4:
                system("cls");
                delete_emp(Emp_ptr,emparr_size);
                getch();


                break;
            case 5:
                system("cls");

                printf("Exit");

                quitflag=1;

                break;

            }
            break;




        case 27:
            printf("Exit");
            quitflag=1;

        default :
            printf("%i\n",p);
        }

    }
    while(quitflag==0);
    free(Emp_ptr);
    return 0;
}

void Displaymenu(char * menu_ptr, int size,int current)
{
    textattr(NormalText);
    system("cls");
    for(int i=0; i<size; i++)
    {
        if(i==current)

        {
            textattr(HighligtText);
            printf("%s\n",menu_ptr);
            textattr(NormalText);
        }
        else
        {
            printf("%s\n",menu_ptr);

        }

        menu_ptr+=12;
    }

}




void AddAllEMP(struct emp*emp_ptr,int size )
{


    emp_ptr=emp_ptr;

    for(int i=0; i<size; i++)
    {
        printf("enter id of emp %i\n",i+1);
        scanf("%i",&emp_ptr->id);
        printf("enter name of emp %i\n",i+1);
        scanf("%s",emp_ptr->name);
        printf("enter salary of emp %i\n",i+1);
        scanf("%f",&emp_ptr->sal);
        printf("enter mobile of emp %i\n",i+1);
        scanf("%s",emp_ptr->mob);
        printf("********************************************\n");
        emp_ptr++;
    }
}
void displayall(struct emp *emp_ptr,int size)
{

    for(int i=0; i<size; i++)
    {

        printf("\t id     of emp %i is %i\n",i+1,emp_ptr->id);
        printf("\t name   of emp %i is %s\n",i+1,emp_ptr->name);
        printf("\t salary of emp %i is %f\n",i+1,emp_ptr->sal);
        printf("\t mobile of emp %i is %s\n",i+1,emp_ptr->mob);
        printf("\n\n\n");
        emp_ptr++;

    }
}
void display(struct emp *emp_ptr,int size)
{
    int num;

    printf("enter the number of emp\n ");
    scanf("%i",&num);


    if( num>=0&&num<=size)
    {
        emp_ptr[num];



        printf("\t id     of emp %i is %i\n",num,emp_ptr[num-1].id);
        printf("\t name   of emp %i is %s\n",num,emp_ptr[num-1].name);
        printf("\t salary of emp %i is %f\n",num,emp_ptr[num-1].sal);
        printf("\t mobile of emp %i is %s\n",num,emp_ptr[num-1].mob);
        printf("******************");


    }

    else
    {
        printf("the number is invalid");
    }


}

void update_emp(struct emp *emp_ptr,int size)
{

    int num;
    printf("enter the number of emp\n ");
    scanf("%i",&num);
    printf("enter the id of emp  %i\n",num);
    scanf("%i",&emp_ptr[num-1].id);
    printf("enter name of emp %i\n",num);
    scanf("%s",emp_ptr[num-1].name);
    printf("enter salary of emp  %i\n",num);
    scanf("%f",&emp_ptr[num-1].sal);
    printf("enter mobile of emp %i\n",num);
    scanf("%s",emp_ptr[num-1].mob);

}

void delete_emp(struct emp *emp_ptr,int size)
{
    int num;
    printf("enter the number of emp \n ");
    scanf("%i",&num);
    if(num>0 && num<=size)
    {

        emp_ptr[num-1].id=NULL;
        for (int i=0; i<10; i++)
        {
            emp_ptr[num-1].name[i] =0;
        }
        emp_ptr[num-1].sal=NULL;
        for (int i=0; i<12; i++)
        {
            emp_ptr[num-1].mob[i] =0;
        }
    }
    else
    {
        printf("the number is invalid");
    }

}





