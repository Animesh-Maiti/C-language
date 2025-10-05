// print the fibonaci series upto n numbers

#include<stdio.h>
int main()
{
    int a,b,c,num;
    printf("enter the number of terms : ");
    scanf("%d",&num);

    a=1;
    b=1;
    printf(" the fibonaci sereis is %d  %d ",a,b);

    for(int i=3; i<=num; i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf(" %d ",c);
    }



    return 0;
}