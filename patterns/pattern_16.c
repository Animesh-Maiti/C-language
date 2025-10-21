/*

   *
  ***
 *****
*******

pattern 16 */

#include<stdio.h>
int main()
{
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);

    for(int i=1; i<=rows; i++)
    {
        for(int j=1; j<=rows-i; j++)
        {
            printf(" ");
        }
        for(int k=1; k<=((i-1)*2)+1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
/*

   1
  123
 12345
1234567

*/
    for(int i=1; i<=rows; i++)
    {
        for(int j=1; j<=rows-i; j++)
        {
            printf(" ");
        }
        for(int k=1; k<=((i-1)*2)+1; k++)
        {
            printf("%d",k);
        }
        printf("\n");
    }
    return 0;
}