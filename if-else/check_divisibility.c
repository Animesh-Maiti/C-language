// take positive integer input and tell if it is divisible by 5 or not. 

#include<stdio.h>
int main (){

    int num;

    printf(" enter a positive interger ");
    scanf("%d",&num);
    if(num <= 0 )
    {
        printf(" please enter a positive number \n");
    }
    
    else if(num%5 == 0)
    {
        printf(" %d is divisible by 5 \n", num);
    
    }
    else
    {
        printf(" %d is not divisible by 5. \n", num);
    }

    return 0;
}