// take the percentage of a student
// and print the grade according to the marks.
// 90-100 excellent
// 80-89 very good
// 70-79 good
// 60-69 can do better
// 50-59 average 
// 40-49 below average
// 40> fail

#include<stdio.h>
int main()
{
    int n;
    
    printf("Enter your percentage. ");
    scanf("%d",&n);

    if(n>100 || n<0)
    {
        printf("enter number between 0 to 100");
    }
    else if(n>90 && n<=100)
    {
        printf("excellent");
    }
    else if(n<=90 && n>80)
    {
        printf("very good");
        
    }
    else if(n<=80 && n>70){
        printf("good");
    }    
    else if(n>60 && n<=70)
    {
        printf("can do better");
    }
    else if(n<=60 && n>50)
    {
        printf("average");
        
    }
    else if(n<=50 && n>=40){
        printf("below average");
    }    
    else{
        printf("fail");
    }


    return 0;
}