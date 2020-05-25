#include <stdio.h>
#include <stdlib.h>
#include "FuncDrinksBib.h"


unsigned int DrinkSelection()
{
    unsigned int choice = 0;

    printf("==============Cold Drinks==============\n");
    printf("Drink selection\n(1)Water(1.00 EUR)\n(2)GreenTea(2.00 EUR)\n(3)Oatly(3.00 EUR)\n(4)HempBeer(3.50 EUR)\n");

    scanf("%d", &choice);


    if(choice > 4)
    {
        do
        {
            printf("Invalid Choice, please select a valid Number\nPress 0 to abort process\n");
            scanf("%d", &choice);
            
                if(choice == 0)
                {
                    return 1;
                }
        }
        while(choice > 4);
    }
    
    
   return choice;
}

int DrinkAmount()
{
    int amount = 0;
    printf("Please select your amount\n");
    scanf("%d",&amount);

    if(amount <= -1)
    {
        do
        {
            printf("Invalid Choice, please select a valid amount\nPress 0 to abort process\n");
            scanf("%d", &amount);
            
                if(amount == 0)
                {
                    return 1;
                }
        }
        while(amount <= -1);
    }

    return amount;
}

float DrinkCalc(int selection, int amount)
{
float sum = 0;

switch(selection)
    {
        case 1: sum = 1.00;break;
        case 2: sum = 2.00;break;
        case 3: sum = 3.00;break;
        case 4: sum = 3.50;break;
        default: return 1;
    }

    sum = selection * amount;

    return sum;
}


float DrinkPayment(float gross)
{
    float coin = 0;
    printf("==============Payment==============\n");
    printf("Please enter 0 to abort payment\n\n");
    
    do
    {
        printf("Please pay %.2f EUR\n", gross);
        scanf("%f", &coin);

        if(coin <= 0)
        {
            break;
        }
        
        gross = gross - coin;
    }
    while(gross > 0.0);

    return gross;
   
}


void DrinkOutput(unsigned int amount)
{
    printf("==============Take your Drinks==============\n");

    for(int i = 0; i<amount;i++)
    {
        printf("Bottle %d of %d is ready to take\n",i+1,amount);
    }
}