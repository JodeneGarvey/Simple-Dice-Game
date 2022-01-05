#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int dice1;
    int dice2;
    int dice3;
    int Fpoints = 0;
    int Ppoints = 0;
    int Npoints = 0;
    int Total_points = 0;
    int Start;
    char option = 'y' || 'n';
    printf("\t\tWELCOME TO THE GAME!\t\t");
    printf("\n***************************************************\n");
    printf("YOUR CURRENT SCORE IS: %d\n",Total_points);
    printf("\n***************************************************\n");
    printf("\n ARE YOU READY TO START THE GAME.");
    printf("\n 1. - START");
    printf("\n 2. - NO");
    scanf("%d",&Start);
    if(Start == 1)
    {
    do
    {
        srand(time(NULL));
        dice1 = rand()%6 + 1;
        dice2 = rand()%6 + 1;
        dice3 = rand()%6 + 1;
        printf("\nYOUR FIRST ROLL IS: %d\n",dice1);
        printf("\nYOUR SECOND ROLL IS: %d\n",dice2);
        printf("\nYOUR THIRD ROLL IS: %d\n",dice3);
        if(dice1 == dice2 && dice3 == dice1)
        {
            printf("\nCONGRADULATIONS YOU GOT 150 POINTS");
            Fpoints = 150;
            Total_points = Fpoints;
        }
        else
            if(dice1 == dice2 || dice3 == dice1 || dice2 == dice3)
        {
            printf("\nCONGRADULATIONS YOU GOT 50 POINTS");
            Ppoints = 50;
            Total_points = Ppoints;
        }
        else
        {
            printf("\n SORRY YOU LOSS 10 POINTS");
            Npoints = -10;
            Total_points = -10;
        }
        printf("\n Do You Want To Continue, y or n: ");
        scanf("%c",&option);
        system("cls");
    }while(option != 'n');
    printf("\n YOUR SCORE FOR THE GAME IS: %d",Total_points);
    }
    return 0;
}
