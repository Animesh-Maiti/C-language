// pattern 13... reveese triangel 

#include<stdio.h>
int main()
{
    int rows;
    printf("Emter the number of rows: ");
    scanf("%d",&rows);

    for(int i=1; i<=rows; i++)
    {
        for(int j=rows-1; j>=i; j--)
        {
            printf(" ");
        }
        for(int k=1; k<=i; k++ )
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}