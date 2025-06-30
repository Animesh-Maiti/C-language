// take two integers input, a and b :and find the remainder when a is divided by b.
// modulus operator is used to find the remainder.
#include<stdio.h>
int main(){
    int r,a,b,q;
    printf("enter te first number ");
    scanf("%d",&a);

    printf("enter the second number ");
    scanf("%d",&b);

    q=b/a;

    r=b-(a*q);

    printf("the remainder is %d",r);

// -----------or---------------


    printf("\n remainder is %d", b%a);

    return 0;
}



