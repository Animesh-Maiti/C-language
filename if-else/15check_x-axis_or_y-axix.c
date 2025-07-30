// given point (x,y) write a programe to
// check if it lies in x-axis or y-axis or at the origine.

#include<stdio.h>
int main()
{
    float x,y;

    printf("enter the coordinates of the point. ");
    scanf("%f %f", &x, &y);

    if(x==0 && y==0)
    {
        printf(" the point lies in origin ");
    }
    else if( x==0)
    {
        printf(" the point lies in y axis. ");
    }
    else if (  y==0)
    {
        printf(" the point lies in x axis. ");
    }
    else
    {
        printf(" the point does nit lie on x or y axis. ");
    }


    return 0;
}
