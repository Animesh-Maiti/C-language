// take an input check if it is by eather 3 or 5 and also
// not divisible by 15.

#include<stdio.h>
int main()
{
    int num ;
    printf(" enter the number. ");
    scanf("%d", &num);

    if(num%3==0 || num%5==0)
    {
        if(num % 15 !=0)
        {
            printf(" it is divisible by 3 or 5 but not 15");
        }
        else{
            printf(" it is divisible by 3 or 5 but also by 15 ");
        }
    }
    else{
        printf("it is not divisible by  3 or 5");
    }

    return 0;
}