#include <stdio.h>
#include <stdlib.h>

#include <windows.h>


COORD coord= {0,0}; // this is global variable
void gotoxy(int x,int y)
{
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
int main()
{
    int S;

    int R=0;
    int C=S/2;
    int x=0;
    int i;
    printf("enter size  of magic box\n");
    scanf("%i",&S);
    system("cls");

    do
    {
        if(S%2==0)
        {
            printf("please enter odd number\n");
            x=1;
        }



            for(i=1; i<=S*S; i++)
            {
                gotoxy(C*5,R*5);
                printf("%i",i);
                if(i%S!=0)
                {
                    C--;
                    R--;
                }
                else
                {
                    R++;
                }
                if(R<0)
                {
                    R=S-1;
                }
                if(R==S)
                {
                    R==0;
                }
                if(C<0)
                {
                    C=S-1;
                }


            }x=1;

        }
        while(x==0);
        return 0;
    }


