// pattern 7.. ABCD.

#include<stdio.h>
int main()
{
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);

    for (int i=0; i<rows; i++)
    {
        int a=65;
        for(int j=0; j<rows; j++)
        {
            printf("%c ",(char)a);
            a++;
        }
        printf("\n");

    }

     printf("\n");

    for (int i=0; i<rows; i++)
    {
        int a=65;
        for(int j=0; j<=i; j++)
        {
            printf("%c ",(char)a);
            a++;
        }
        printf("\n");

    }
    return 0;
}