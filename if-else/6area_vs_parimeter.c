/*ginven the length and breadth of a rectangle. find out that area
of rectangle is greater or perimetr*/

#include<stdio.h>
int main()
{
    int l, b, perimeter, area;

    printf(" enter the length of the rectangle. ");
    scanf("%d", &l);

    printf(" enter the bredth of the rectangle.");
    scanf("%d",b);

    perimeter = 2*(l+b);
    area = l*b;

    if(area==perimeter)
    {
        printf(" they are equale. ");
    
    }
    else if(area>perimeter)
    {
        printf(" the area of rectangle is greter.");
        
    }
    else{
        printf(" the parimeter of rectengle is greater");
    }
    return 0;

}