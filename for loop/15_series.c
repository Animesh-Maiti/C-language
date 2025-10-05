// find the sum of the series upto n. (1-2+3-4+5-6....n)

#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("enter the number n: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            sum=sum-i;
        }
        else
        {
            sum=sum+i;
        }
    }

    printf("the sum of the series is %d",sum);

// the above method is too not eficient for big numbers

    if(n%2==0)
    {
        sum=-(n/2);
    }
    else
    {
        sum=-((n-1)/2)+n;
    }
    printf("\nthe sum of the series is %d",sum);


    return 0;
}