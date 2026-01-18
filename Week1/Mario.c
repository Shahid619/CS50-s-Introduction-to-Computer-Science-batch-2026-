#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int number;
    // Taking number from User
    do
    {
        number = get_int("\nenter number: ");
    }
    while (0 >= number || number > 8);

    // this loop is for counting the overall numbers
    for (int i = 0; i < number; i++)
    {
        // This is for printing space
        for (int k = number; k > i; k--)
        {
            printf(" ");
        } // here I didn't added a \n purposefully to print  space & # same line.

        // Now this is for printing #.
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        // after each cycle adding line break.
        printf("\n");
    }
}
