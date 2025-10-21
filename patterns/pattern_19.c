/*

   *
  ***
 *****
*******
 *****
  ***
   *

   pattern 19 */

#include<stdio.h>
int main()
{
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);

    int nst=1;
    int nsp=rows-1;


    for(int i=1; i<=rows; i++)
    {
        for(int j=1; j<=nsp; j++ )
        {
            printf(" ");
        }
        for(int k=1; k<=nst; k++)
        {
            printf("*");
        }
        printf("\n");
        if(i>=(rows+1)/2)
        {         
            nsp++;
            nst-=2;
        }
        else
        {
            nsp--;
            nst+=2;
           
        }

    }
    return 0;
}