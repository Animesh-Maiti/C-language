/*

******
*    *
*    *
******

pattern_10....hollow rectangle */ 

#include<stdio.h>
int main()
{
    int rows, cols;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    printf("Enter the number of ccols: ");
    scanf("%d",&cols);

    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            if(i==0 || j==0 || i==rows-1 || j==cols-1)
            {

                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}