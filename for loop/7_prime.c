// check if the number is prime or not

#include<stdio.h>
int main()
{
    int n;
    printf("enter a number to check if prime: ");
    scanf("%d",&n);

    if(n<=1){
        printf("%d is not prime. ",n);

        return 0;
    }

    int is_prime = 1;

    for(int i=2; i*i<=n; i++)

    {
        if(n%i==0)
        {
            is_prime=0;
            break;
        } 

    }
    if(is_prime == 1)
    {
        printf(" %d is prime. ",n);
    }
    else
    {
        printf("%d is not prime. ",n);
    }
    
    return 0;

 } 