// take positive integer input and tell if it is even or odd
#include<stdio.h>
int main()
{
    int n;

    printf("enter the positive number ");
    scanf("%d",&n);

    if(n <= 0)
    {
        printf(" please enter positive number \n");
    }
    
    else if(n%2==0){
        printf("the number is even \n");
    }

    else 
    {
        printf(" the number is odd \n");
    }

    return 0;

}