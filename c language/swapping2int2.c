#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nThe value of a is %d",a);
    printf("\nThe value of b is %d",b);
    return 0;
}
