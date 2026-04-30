#include <cs50.h>
#include <stdio.h>

int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickles(int cents);
int calculate_pennies(int cents);



int main(void){
    int cents;
    do
    {
        cents=get_int("Change owed: ");
    }
    while (cents < 0);
    //quarters
    int quarters = calculate_quarters(cents);
    // Subtract the value from cents
    cents = cents - (quarters * 25);

    //dimes
    int dimes =calculate_dimes(cents);
    // Subtract the value from cents
    cents = cents - (dimes * 10);

    //nickles
    int nickles = calculate_nickles(cents);
    // Subtract the value from cents
    cents = cents - (nickles * 5);

    //pennies
    int pennies = calculate_pennies(cents);
    // Subtract the value from cents
    cents = cents - (pennies * 1);

     // Sum the number of quarters, dimes, nickels, and pennies used
     int sum = quarters + dimes + nickles + pennies;
    // Print that sum
    printf("%i\n", sum);
}

int calculate_quarters(int cents)
{
    int quarters=0;
    while(cents>=25)
    {
        quarters++;
        cents=cents-25;
    }
    return quarters;
}

int calculate_dimes(int cents)
{
    int dimes=0;
    while(cents>=10)
    {
        dimes++;
        cents=cents-10;
    }
    return dimes;
}

int calculate_nickles(int cents)
{
    int nickles = 0;
    while(cents>=5)
    {
        nickles++;
        cents = cents - 5;
    }
    return nickles;
}

int calculate_pennies(int cents)
{
    int pennies = 0;
    while(cents>=1)
    {
        pennies++;
        cents = cents - 1;
    }
    return pennies;
}
