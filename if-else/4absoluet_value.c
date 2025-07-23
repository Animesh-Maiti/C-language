// give the absolute value of any given number

#include<stdio.h>
int main()
{
    int num, num2 ;

    printf (" enter a number ");
    scanf("%d",&num);

    if (num<0)
    {
        num2 = -1*num;
        printf ("the absolute value of %d is %d" , num, num2);

    }
    else
    {
        printf("the absolute value of %d  is %d", num, num);
    }
    return 0;
}