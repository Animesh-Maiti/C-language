// to reverse of a given number.

#include<stdio.h>
int main()
{
    int num , digit, temp, reverse=0;

    printf("enter the number : ");
    scanf("%d",&num);

    temp=num;

    while(temp!=0)
    {
        digit=temp%10;

        reverse = (reverse*10)+digit;

        temp=temp/10;
    }
    printf("the reverse of the number is %d",reverse);

    return 0;

}