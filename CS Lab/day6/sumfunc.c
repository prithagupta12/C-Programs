#include<stdio.h>
int sum(int x, int y)
{
	return x+y;
}

int main()
{
	int a,b,s;
	printf("Enter two number:");
	scanf("%d %d",&a,&b);
	s=sum(a,b);
	printf("\nSummation is %d",s);
	return 0;
}