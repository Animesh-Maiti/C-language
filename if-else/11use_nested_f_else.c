// using nested if else check the input is divisible by 5 and 3.

#include<stdio.h>
int main(){

    int num;

    printf("Enter the number. ");
    scanf("%d",&num);

    if (num%3==0)
    {
        if(num%5==0)
        {
            printf("The number is divisible by 5 and 3");
        }
        else{
            printf("the number is divisible by 3 and 5");
        }
    }
    else 
    {
        printf(" the number is not divisible by 3 and 5");
    }
    return 0;
    
}