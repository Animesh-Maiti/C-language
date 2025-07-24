// check it given num is three number digit or not.

#include<stdio.h>
int main(){

    int num;
    printf(" enter the number. ");
    scanf("%d",&num);

    if(num>99 && num<1000)
    {
        printf (" the number is a three digit number");
    }
    else
    {
        printf(" the number is not a three digit number");
    }
    return 0;
}
