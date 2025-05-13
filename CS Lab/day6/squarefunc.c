#include<stdio.h>
int sqr(int x)
{
	int z;
	z=x*x;
	return z;
}

int main()
{
	int a,s;
	printf("Enter a number:");
	scanf("%d",&a);
	s=sqr(a);
	printf("\nSquare of the number is %d",s);
	return 0;
}