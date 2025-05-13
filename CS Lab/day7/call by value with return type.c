#include<stdio.h>
int sqr (int);
int main()
{
	int num, r;
	printf("Enter a number:");
	scanf("%d",&num);
	r=sqr(num);
	printf("\nSqure is: %d",r);
	return 0;
}
int sqr (int a)
{
	return a*a;
}