// take flote input and print the fractional part of the number 

#include<stdio.h>
int main()
{
    float x,z;
    printf("enter the float value ");
    scanf("%f",&x);

    int y=x;
    z=x-y;

    printf("the fractional part of the float is %f",z);
    return 0;
}