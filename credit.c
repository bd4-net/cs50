#include <cs50.h>
#include <stdio.h>

int calculate_checksum(int check);
void check(int checker, int fix, int sum);

int main(void){
    long int card;
    int count=0;
    int digit1;
    int digit2;
    do
    {
        card=get_long("Credit card number: ");
    }while(card < 1);
    int sum1=0;
    int sum2=0;
    int sum=0;
    long int card1;
    card1=card;

    while( card1 > 9 )
    {
        card1 /= 10;
        count++;
    }
    count++;

        //last digit is card % 10 = last digit of card no
        do
        {


            digit1 = card % 10;
            card /=10;
             sum1=sum1 + digit1;
            digit2 = card % 10;
            card /= 10;
            sum2=sum2 + calculate_checksum(digit2);


        }while(card != 0);
        sum = sum1+sum2;
         printf("%i\n", count);
         printf("%i\n", digit1);
         printf("%i\n", digit2);
        if (sum % 10 == 0)
        {

            if (count % 2 == 0)
        {


            check(count, digit2, sum);

        }
        else
        {
            check(count, digit1, sum);
        }
        }
        else
        {
            printf("INVALID\n");
        }

}

int calculate_checksum(int check)
{
    int sum=0;
    check = check * 2;
    if(check >= 10)
    {
        while(check)
        {
        sum += check % 10;
        check /= 10;
        }
    }
    else
    {
        sum = sum + check;
    }
    return sum;

}


void check(int checker, int fix, int sum)
{
    if(checker == 15 || fix == 3)
    {
        printf("AMEX\n");
    }
    else if(checker == 16)
    {
        if (fix == 4){
            printf("VISA\n");
        }
        else{
            printf("MASTERCARD\n");
        }
    }
    else if(fix == 4 || checker == 13 || checker == 16)
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }
}

