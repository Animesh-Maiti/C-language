//take 3 numbers input and tell if they can be the sides of a triangle

#include<stdio.h>
int main()
{
    int a,b,c;
    printf (" Enter the length of first side of the triangle. ");
    scanf("%d",&a);

    printf("Enter the length of second side of the triangle. ");
    scanf("%d",&b);

    printf("Enter the length of thethird side of the triangle. ");
    scanf("%d",&c);

    if ((a+b)>c && (b+c)>a && (c+a)>b)
    {
        printf("it is a triangle.");
    }
    else
    {
        printf("it is not a trinagle. ");
    }
    return 0;
}