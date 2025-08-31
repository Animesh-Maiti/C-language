//first for loop.
// print hello n times and take the value of  from the user


#include<stdio.h>
int main()
{
    int n, i;
    printf("Enter the number of time you want to run the loop: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("hello \n");
    }
    printf("%d",i);

    return 0;

}