#include<stdio.h>
void sqr(int x);

int main()
{
	int a,s;
	printf("Enter a number:");
	scanf("%d",&a);
	sqr(a);
	return 0;
}

void sqr(int x)
{
	int z;
	z=x*x;
	printf("\nSquare of the number is %d",z);
}
