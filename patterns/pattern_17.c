//pattern 17 alphabet pyramid

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
            printf("%c",(char)(k+64));
        }
        printf("\n");
    }
    return 0;
}