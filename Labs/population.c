//CALCULATE THE NUMBER OF YEARS REQUIRED FOR THE POPULATION TO GROW FROM THE START SIZE TO THE END SIZE

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int start; //use a do while loop to prompt user for input until they enter a number >= 9
    do
    {
        start = get_int("Start size: ");
        if (start < 9)
        {
            printf("The number is too low. ");
        }
    }
    while (start < 9);

    // TODO: Prompt for end size
    int end;
    do
    {
        end = get_int("End size: ");
        if (end < start)
        {
            printf("You need to enter a number that is equal or greater than the start size. ");
        }
    }
    while (end < start);

    // TODO: Calculate number of years until we reach threshold
    int years = 0; //keep track of years
    
    while (start < end)
    {
        start = start + (start/3) - (start/4);
        years++;
    }

    // TODO: Print number of years
    printf("Years: %i\n", years);
}
