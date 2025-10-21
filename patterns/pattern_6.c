/* 

1
13
135
1357

pattern 6 odd number triangle.*/

#include<stdio.h>
int main()
{
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);

    for(int i=1; i<=rows; i++)
    {
        for(int j=1;j<=(1+((i-1)*2));j+=2)
        {
            
            printf("%d ",j);
            
        }
        printf("\n");
    }

// second methord.

    for(int i=1; i<=rows; i++)
    {
        int a=1;
        for(int j=1;j<=i;j++)
        {
            
            printf("%d ",a);
            a+=2;
            
        }
        printf("\n");
    }
    return 0;
}

