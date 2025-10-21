/*

*******
*** ***
**   **
*     *
pattern 20 */

#include<stdio.h>
int main()
{

    int rows;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    int nsp=1;
    for(int i=1; i<=(rows*2)-1; i++)
    {
        printf("*");
    }
    printf("\n");

    for(int i=1; i<rows; i++)
    {
        for(int j=rows-1 ; j>=i; j--)
        {
            printf("*");
        }

        for(int k=nsp; k>=1; k-- )
        {
            printf(" ");
        }

        for(int j=rows-1 ; j>=i; j--)
        {
            printf("*");
        }

        nsp+=2;
        printf("\n");
        
    }
    return 0;
}