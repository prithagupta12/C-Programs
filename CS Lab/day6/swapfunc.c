#include<stdio.h>

void swap(int x, int y)
{
	int temp;
	temp=y;
	y=x;
	x=temp;
	printf("\nAfter swap first number:%d",x);
	printf("\nAfter swap second number:%d",y);	

}

int main()
{
	int a,b;
	
	printf("Enter first number:");
	scanf("%d",&a);
	
	printf("\nEnter second number:");
	scanf("%d",&b);
	
	swap(a,b);
	

	return 0;
}
