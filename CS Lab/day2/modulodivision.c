#include<stdio.h>
int main ()
{
	int a,b,r;
	printf("Enter First Number:");
	scanf("%d",&a);
	printf("\nEnter Second Number:");
	scanf("%d",&b);
	if(a>b)
	{
		r=(a%b);
	}
	else
	{
		r=(b%a);
	}
	printf("The remainder is: %d",r);
	return 0;
}