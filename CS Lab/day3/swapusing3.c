#include<stdio.h>
int main ()
{
	int a,b,temp;
	printf("Enter value of a:");
	scanf("%d",&a);
	printf("\nEnter value of b:");
	scanf("%d",&b);
	
	temp=a;
	a=b;
	b=temp;
	
	printf("\nAfter swapping a is:%d",a);
	printf("\nAfter swapping b is:%d",b);
	
	return 0;
		
}