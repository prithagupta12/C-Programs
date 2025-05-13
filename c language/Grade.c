//To develop a grade and where grade O:91-100,E:81-90,A:71-80,B:61-70,C:51-60,D:41-50,F:less than 40.
#include<stdio.h>
int main()
{
    int phy,chem,math;
    float marks;
    printf("Enter your marks of Physics,Chemistry,Math");
    scanf("%d%d%d",&phy,&chem,&math);
    marks=(phy+chem+math)/3;
    if(marks>=91 && marks<=100)
    {
        printf("Your grade is O");
    }
    if(marks>=81 && marks<=90)
    {
        printf("Your grade is E");
    }
    if(marks>=71 && marks<=80)
    {
        printf("Your grade is A");
    }
    if(marks>=61 && marks<=70)
    {
        printf("Your grade is B");
    }
    if(marks>=51 && marks<=60)
    {
        printf("Your grade is C");
    }
    if(marks>=41 && marks<=50)
    {
        printf("Your grade is D");
    }
    if(marks<=40)
    {
        printf("Your grade is F");
    }
    return 0;
}

