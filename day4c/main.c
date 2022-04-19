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
int main()
{ char p;
    int quitflag=0;
    int current=0;



    do
    {

        char  menu[5][9]= {"Arabic","English","Turkish","Spanish","German"};
        textattr(NormalText);
        system("cls");
        for(int i=0; i<5; i++)
        {
            if(i==current)

            {
                textattr(HighligtText);


            }
            else
            {

                textattr(NormalText);
            }
            printf("%s\n",menu[i]);
        }
        char p=getch();
        switch(p)
        {
        case -32:
            p=getch();
            switch(p)
            {
            case 72:if(current>0)
                {

                current--;
                }
                break;
            case 80:
                if(current<5)
                {
                    current++;
                }
                break;
                 case 77:
                current=0;
                break;

            case 75:

                current=5;


                break;

            }
            break;

        case 13:
            switch(current)
            {
            case 0:
                system("cls");
                printf("Arabic");

                getch();
                break;
            case 1:
                system("cls");
                printf("English");
                getch();
                break;
            case 2:
                system("cls");
                printf("Turkish");
                getch();

                break;
            case 3:
                system("cls");
                printf("Spanish");
                getch();

                break;
            case 4:
                system("cls");
                printf("German");
                getch();


                break;
            }
                break;



        case 27:
            printf("Exit");
            quitflag=1;

                break;
        default :
            printf("%i\n",p);
        }

    }
    while(quitflag==0);
    return 0;
}
