/*

1
AB
123
ABCD

pattern 8 */

#include<stdio.h>
int main()
{
    int rows;
    printf("Enetr the number of rows: ");
    scanf("%d",&rows);

    for(int i=1; i<=rows; i++)
    {
        if(i%2!=0)
        {
            for(int j=1;j<=i;j++)
            {
                 printf("%d ",j);
            }
        }
        else
        {
            for(int j=1;j<=i;j++)
            {
                printf("%c ",(char)(j+64));
            }
        }
        printf("\n");

    }
    return 0;
}