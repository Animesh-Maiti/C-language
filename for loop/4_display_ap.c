// display the AP- 1,3,5,7,9...

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    for(int i=1; i<=(1+((n-1)*2));i=i+2)
    {
        printf(" %d ",i);        
    }
    return 0;
}