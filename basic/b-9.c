// percentage of 5 subjects, maths , english , hindi, science, history (mm).

#include<stdio.h>
int main()
{
    float s1, s2, s3, s4, s5, p;
    printf("enter the marks in english ");
    scanf("%f",&s1); 
    printf("enter the marks in maths ");
    scanf("%f",&s2); 
    printf("enter the marks in hindi ");
    scanf("%f",&s3); 
    printf("enter the marks in science ");
    scanf("%f",&s4); 
    printf("enter the marks in history ");
    scanf("%f",&s5); 

    p= (s1+s2+s3+s4+s5)/5;

    printf("the percentage is %f ",p);
    return 0;

}