#include <cs50.h>
#include <stdio.h>

void print_row(int spaces, int bricks);

int main(void){
    int n;
    int i;
    int j;
    do
    {
        n=get_int("What's the height? ");
        j=n;
    }
    while (n < 1 || n > 8);
    for (i = 0; i < n; i++)
    {
         print_row(j-1, i+1);
         j--;
    }

}

void print_row(int spaces, int bricks)
{

    for( int j = spaces; j > 0; j--)
    {
        printf(" ");

    }
    for (int i = 0; i < bricks; i++)
    {
        printf("#");
    }
    printf("  ");
    for(int k =0; k < bricks; k++)
    {
        printf("#");
    }
    printf("\n");
}
