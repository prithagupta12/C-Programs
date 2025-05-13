/*write a c program to perform the modular division of two integers*/
#include<stdio.h>
int main()
{
    int a,b,rem;
    printf("Enter a=");
    scanf("%d",&a);
    printf("Enter b=");
    scanf("%d",&b);

    rem=a%b;

    printf("Remainder=%d",rem);
    return 0;
}
