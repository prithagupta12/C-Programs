/*find out simple interest*/
#include<stdio.h>
int main()
{
    float principal,rate,time,simple_interest;
    printf("Enter the value of Principal,Rate ,Time:");
    scanf("%f%f%f",&principal,&rate,&time);
    simple_interest=principal*rate*time/100;
    printf("The value of simple interest is %f",simple_interest);
    return 0;
}
