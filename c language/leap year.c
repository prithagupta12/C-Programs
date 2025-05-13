/*the year is leap year or not*/
#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year");
    scanf("%d",&year);
    // leap year if perfectly divisible by 400
    if(year%400==0)
    {
        printf("The year is leap year");
    }
    // not a leap year if divisible by 100
   // but not divisible by 400
    else if(year%100==0)
    {
        printf("The year is not leap year");
    }
    // leap year if not divisible by 100
   // but divisible by 4
    else if(year%4==0)
    {
        printf("The year is leap year");
    }
    // all other years are not leap years
    else
    {
        printf("the year is not leap year");
    }
    return 0;
}
