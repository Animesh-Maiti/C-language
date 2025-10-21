/*

1234321
123 321
12   21
1     1

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
        if(i<=rows)
        {
            b++;
        }
        else
        {
            b--;
        }
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
        }

        for(int j=rows-1 ; j>=i; j--)
        {
            a--;
            printf("%d ",a);
            
        }

        nsp+=2;
        printf("\n");
        
    }
    return 0;
}