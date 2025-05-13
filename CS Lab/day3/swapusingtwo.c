#include<stdio.h>
int main ()
{
	int a,b;
	printf("Enter value of a:");
	scanf("%d",&a);
	printf("\nEnter value of b:");
	scanf("%d",&b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("\nAfter swapping a is:%d",a);
	printf("\nAfter swapping b is:%d",b);
	
	return 0;
		
}