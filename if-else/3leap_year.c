// check if it is a leap year or not (given codition is if it is divisible by 4 or not)

#include<stdio.h>
int main()
{
    int num ;

    printf("enter the year ");
    scanf("%d",&num);

    if(num%4==0)
    {
        printf (" this is a leap year ");
    }
    else{
        printf(" this is not a leap year ");
    }
    return 0;
}