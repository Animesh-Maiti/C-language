// take positive input amd tell if it is divisible by 5 or 3.

#include<stdio.h>
int main()
{
    int num;
    printf(" enetr the number ");
    scanf("%d",&num);

    if(num%5==0 || num%3==0)
    {
        printf("the number is divisible by 5 or 3 ");
    }
    else{
        printf("the number is not divisible by either 3 or 5");
    }
    return 0;
}