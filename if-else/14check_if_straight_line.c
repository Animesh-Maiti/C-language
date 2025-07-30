//given  three points (x1,y1), (x2,y2), and (x3,y3),
//write a program to chech if all points are in straight line.

#include<stdio.h>
int main()
{
    float x1,x2,x3,y1,y2,y3,m1,m2;
    
    printf("enter the first coordinates x1, y1: ");
    scanf("%f %f", &x1, &y1);
    printf("enter the second coordinates x2, y2: ");
    scanf("%f %f", &x2, &y2);
    printf("enter the third coordinates x3, y3: ");
    scanf("%f %f", &x3, &y3);

    m1 = (y2 - y1) / (x2 - x1);
    m2 = (y3 -y2) / (x3 - x2); 

    if(m1==m2)
    {
        printf(" they are in a straight line ");
        
    }
    else
    {
        printf("they are not in a straight. ");
    }

   // printf("%f ,%f ,%f ,%f ,%f ,%f ",x1,x2,x3,y1,y2,y3);

    return 0;

}