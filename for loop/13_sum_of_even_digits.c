// to find the sum of all even digits of a given number

#include<stdio.h>
int main()
{
    int num,temp,sum=0, digit;

    printf("enter the number: ");
    scanf("%d",&num);

    temp=num;
 
    while( temp!=0)
    {
        
        digit=temp%10;

        if(digit%2==0){
            
            sum=sum+digit;
        }

        temp=temp/10;
    }
    if(sum<0)
    {
        sum=-sum;
    }
    printf("the sum of the digits = %d",sum);
    return 0;
}