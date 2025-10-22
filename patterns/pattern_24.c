/*

4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4 
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4

*/

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int min=0;

    for(int i=1; i<=(n*2)-1; i++)
    {
        for(int j=1; j<=(n*2)-1; j++)
        {
            int a=i;
            if(i>n) 
            {
                a=(n*2)-i;
            }
            int b=j;
            if(j>n)
            {
                b=(n*2)-j;
            }
            if(a<b)
            {
                printf("%d",(n+1)-a);
            }
            else
            {
                printf("%d",(n+1)-b);
            }
        }
        printf("\n");
        

    }

}

  