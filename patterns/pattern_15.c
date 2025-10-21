/* 

    A
   AB
  ABC
 ABCD
 
pattern 15*/


#include<stdio.h>
int main()
{
    int rows;
    printf("Entefrr the number of rows: ");
    scanf("%d",&rows);

    for(int i=1; i<=rows; i++)
    {
        for(int j=rows-1; j>=i; j--)
        {
            printf(" ");
        }
        int a=1;
        for(int k=1; k<=i; k++)
        {
            printf("%c",(char)(a+64));
            a++;
        }
        printf("\n");
    }
    return 0;
}