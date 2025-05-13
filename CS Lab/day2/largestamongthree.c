#include<stdio.h>
int main ()
{
	int a,b,c;
	printf("Enter First Number:");
	scanf("%d",&a);
	printf("\nEnter Second Number:");
	scanf("%d",&b);
	printf("\nEnter Third Number:");
	scanf("%d",&c);
	if((a>b)&&(a>c))
	{
		printf("\n%d is largest",a);
	}
	else if((b>a)&&(b>c))
	{
		printf("\n%d is largest",b);
	}
	else
	{
		printf("\n%d is largest",c);
	}

	
	return 0;
}


	
	/*if(a>b)
	{
		if(a>c)
		{
			printf("\n a is largest");
		}
	}
		if(b>a)
	{
		if(b>c)
		{
			printf("\n b is largest");
		}
	}
		if(c>a)
	{
		if(c>b)
		{
			printf("\n b is largest");
		}
	}*/