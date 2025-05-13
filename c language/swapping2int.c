//Swapping 2 integers using 3 variables
#include<stdio.h>
int main()
{
   int a,b,temp;
   printf("Enter the value of a:");
   scanf("%d",&a);
   printf("Enter the value of b:");
   scanf("%d",&b);
   temp=a;
   a=b;
   b=temp;
   printf("\nThe value of a:%d",a);
   printf("\nThe value of b:%d",b);
   return 0;
}
