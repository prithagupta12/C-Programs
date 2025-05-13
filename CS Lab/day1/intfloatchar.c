#include<stdio.h>
void main()
{
	int a;
	float b;
	char x;
	printf("\nEnter integer value:");
	scanf("%d",&a);
	
	printf("\nEnter float value:");
	scanf("%f",&b);
	
	printf("\nEnter char value:");
	scanf(" %c",&x);

	printf("\nInt value is:%d",a);
	printf("\nfloat value is:%f",b);
	printf("\nchar value is: %c ",x);
	
}