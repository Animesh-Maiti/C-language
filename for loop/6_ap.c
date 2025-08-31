// display the ap 100, 97, 94... upto n terms wich are positive

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    int a =100;
    for(int i=1; i<=n && a>0 ;i++)
    {
        printf(" %d ",a);
        a=a-3;        
    }
    return 0;
}