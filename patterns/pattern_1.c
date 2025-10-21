/* 

*****
*****
*****

print the pattern 1.*/

#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number of rows: ");
    scanf("%d",&num);

    for(int i=0; i<num; i++)
    {
        for (int j=0; j<=4; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}