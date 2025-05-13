//White a c program to find out the factorial of a number.
#include<stdio.h>
int main()
{
    int i,num,factorial=1;
    printf("Enter the number whose factorial u want to find:");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        factorial=factorial*i;
    }
    printf("The factorial of %d is %d",num,factorial);
    return 0;
}
