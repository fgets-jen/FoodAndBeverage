#include <stdio.h>
#include <stdlib.h>
#include "FuncDrinksBib.h"

int main()
{

int exit;
unsigned int selection = DrinkSelection();
int amount = DrinkAmount();
float sum = DrinkCalc(selection,amount);
float paid = DrinkPayment(sum);

if(paid <= 0)
{
    DrinkOutput(amount);
    
    if(paid < 0)
    {
        printf("Change will be issued\n");
    }

    printf("Thanks for buying, have a nice day\n");
}

else
{
    {
        printf("Process aborted\nPlease take change, if required and restart\n");
    }
}

printf("Programm ends up here, please press 0 to close\n");
scanf("%d", &exit);

return 0;

}