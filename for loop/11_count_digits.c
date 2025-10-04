// count the number of digits in  a given number

#include<stdio.h>
int main()
{
    int num,temp,digit, count=0;
    printf("enter the number: ");
    scanf("%d",&num);

    temp = num;

    if(temp==0)
    {
        count++;
    }
    while(temp!=0)
    {
        count++;
        temp=temp/10;

    }
    
    printf("\nthe number of digit = %d ",count);
    return 0;
}