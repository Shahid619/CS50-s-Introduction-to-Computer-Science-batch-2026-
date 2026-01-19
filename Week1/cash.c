#include <cs50.h>
#include <stdio.h>

int main (void)
{
    int get_amount;
    do
    {
        get_amount=get_int("give cash : ");
    }
    while (get_amount < 0);

    int quarter=25;
    int dime=10;
    int nikkel=5;
    int penny=1;
    int count=0;
    while(get_amount != 0)
    {
        if(get_amount >= quarter)
        {
            get_amount=get_amount-quarter;
            count=count+1;
        }
        else if (get_amount >=dime && get_amount < quarter)
        {
            get_amount=get_amount - dime ;
            count = count+1 ;
        }
        else if (get_amount >=nikkel && get_amount < quarter && get_amount < dime)
        {
            get_amount=get_amount - nikkel ;
            count = count+1 ;
        }
        else if (get_amount >=penny && get_amount < nikkel && get_amount < quarter && get_amount < dime)
        {
            get_amount=get_amount - penny ;
            count = count+1 ;
        }
        else{
            break;
        }

    }

    printf("%i \n",count);
}
