/*find the total n% of marks for a student by taking three subjects marks as input*/
#include<stdio.h>
int main()
{
    float a,b,c,sum,per;
    printf("Enter the 3 numbers:");
    scanf("%f%f%f",&a,&b,&c);
    sum=a+b+c;
    per=sum/3;
    printf("the result is %f",per);
    return 0;
}
