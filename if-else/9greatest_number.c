/*take 3 integer an print the gretest number of them*/

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the first number ");
    scanf("%d",&a);
    printf("Enter the second number ");
    scanf("%d",&b);
    printf("Enter the third number ");
    scanf("%d",&c);

    if(a>=b && a>=c)
    {
        printf("%d is the greatest number",a);
    }
    else if(b>=a && b>=c)
    {
        printf("%d is the greatest number",b);
    }
    else{
        printf("%d is the greatest number",c);
    }
    return 0;
}