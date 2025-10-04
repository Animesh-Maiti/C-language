// to find the sum of all digits of a given number

#include<stdio.h>
int main()
{
    int num,temp,sum=0, digit;

    printf("enter the number: ");
    scanf("%d",&num);

    temp=num;
 //   sum=0;

    while( temp!=0)
    {
        
        digit=temp%10;

        sum=sum+digit;

        temp=temp/10;
    }
    if(sum<0)
    {
        sum=-sum;
    }
    printf("the sum of the digits = %d",sum);
    return 0;
}