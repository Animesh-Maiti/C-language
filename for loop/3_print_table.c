// print the table of 19 

#include<stdio.h>
int main()
{
    int i,n;

    printf("Enter the number for the table: ");
    scanf("%d",&n);

    for (i=1;i<=10;i++)
    {
        printf(" %d X %d = %d \n",n,i,n*i);
    }

    return 0;
}