#include<stdio.h>
int main ()
{
	int a,b;
	printf("Enter First Number:");
	scanf("%d",&a);
	printf("\nEnter Second Number:");
	scanf("%d",&b);

	if(a>b)
	{
		printf("\n%d is larger",a);
	}
	else
	{
		printf("\n%d is larger",b);
	}
	
	
	return 0;
}