/*

1234567
123 567
12   67
1     7

pattern 20 */

#include<stdio.h>
int main()
{

    int rows;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    int nsp=1;
    int b=1;
    for(int i=1; i<=(rows*2)-1; i++)
    {
        printf("%d ",b);
        b++;
    }
    printf("\n");

    for(int i=1; i<rows; i++)
    {
        int a=1;
        for(int j=rows-1 ; j>=i; j--)
        {
            printf("%d ",a);
            a++;
        }

        for(int k=nsp; k>=1; k-- )
        {
            printf("  ");
            a++;
        }

        for(int j=rows-1 ; j>=i; j--)
        {
            printf("%d ",a);
            a++;
        }

        nsp+=2;
        printf("\n");
        
    }
    return 0;
}