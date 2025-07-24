/*question : if cost price and selling price of an item is input through
the keyboard , write a program to determine whether the
seller has made a profit or loss. also tell how much.  */

#include<stdio.h>
int main()
{
    float cp, sp, profit, loss;

    printf("enter the cost price of the item. ");
    scanf("%f",&cp);
    printf("enter the selling price of item. ");
    scanf("%f",&sp);

    if(cp==sp)
    {
        printf("no profit no loss");
    }
    else if (cp<sp)
    {
        profit = sp - cp;
        printf("the seller has made a profit of rupees %f", profit);

    }
    else
    {
        loss = cp-sp;
        printf(" the seller made a loss of rupess %f ",loss);
    }

    return 0;

}