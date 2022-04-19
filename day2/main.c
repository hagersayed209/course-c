#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    int x;
           printf("enter your num ");
            scanf("%i",&x);
      if(x%2==0)
        {
           printf("the num is even\n");
        }
      else
        {
            printf("the num is odd\n");
        }







         int grade;
              printf("enter your grade\n" );
             scanf("%i",&grade);
        if(grade>=90)
            {
               printf("your grade is:A\n");
            }
            else if(grade>=80)
              {
               printf("your grade is:B\n");
              }
           else if(grade>=70)
             {
                printf("your grade is:C\n");
             }
          else if(grade>=60)

              {
              printf("your grade is:D\n");
             }
          else
             {
             printf("your grade is:F\n");
             }






          int z;
                printf("Main menu \npress any number from 1 to 4\n 1.Add \n 2.Edit \n 3.Display \n 4.Exit \n");
                scanf("%i",&z);
         switch (z)
         {
          case 1:
                printf("your choice isAdd ");
           break;
           case 2:
                printf("your choice is Edit ");
           break;
           case 3:
                printf("your choice is Display ");
           break;
           case 4:
                printf("your choice is Exit ");
          break;
          default:
               printf("your choice no Correct please Try Again ");

         }





                 for(int i=0;i<=100;i++)
                    {
                       if(i%2!=0)
                         {
                         printf ("%i\n",i);
                        }
                  }









          int bal;
           float intr,year;


             printf("enter your balance\n");
             scanf("%i",&bal);
             printf("enter your bank intrest \n" );
             scanf("%f",&intr);
             printf("enter your years \n" );
             scanf("%f",&year);
      for(int x=0;x<year;x++)
           {
             bal= bal+bal*intr;
              printf("your balance after Calculate bank intrest is%i\n", bal );
           }
           char AS;
           for(int i=0;i<=255;i++)
           {
               printf("ASCII code for %c is= %i\n",i,i);

           }
           int sum=0;
           int num1;

           while(sum<=100)

            {  printf("enter the number");
            scanf("%i",&num1);

            sum=sum+num1;*/




    char asc;
    int c=0;

    do
    {
        printf("enter any char to display ASCII\n to exit enter \n");
        asc= getch();
        if(asc!=27)
        {
            printf("ASCII code for %c is:=%i\n",asc,asc);
        }
        else
        {
            printf("you exit");
            c=1;
        }

    }
    while(c==0);/*
   char as;
        do
          {
       printf("enter any char to display ASCII\n to exit enter \n");
       as=getch();
       printf("ASCII code for %c is:=%i\n",as,as);
      }while(as!=27);)*/
    /*



         int r=0;
             do
             {


                 int z;
                 printf("Main menu \npress any number from 1 to 4\n 1.Add \n 2.Edit \n 3.Display \n 4.Exit \n");
                 scanf("%i",&z);
            switch (z)
                    {
                       case 1:
                           printf("your choice isAdd ");
                        break;
                        case 2:
                            printf("your choice is Edit ");
                        break;
                        case 3:
                             printf("your choice is Display ");
                        break;
                        case 4:
                             printf("your choice is Exit ");
                             r =1;
                       break;
                default:
                      printf("your choice no Correct please Try Again ");

                 }
              }while(r==0);*/
    return 0;
}
