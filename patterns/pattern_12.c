/* 

1
23
456
78910

pattern floyd's triangle....*/

#include<stdio.h>
int main()
{
    int rows, a=1;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);

    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<=i; j++)
        {
            printf("%d ",a);
            a++;
        }
        printf("\n");
    }
}