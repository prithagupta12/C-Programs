#include<stdio.h>
int main ()
{
	int n,a,b,c;
	printf("Enter a 3 digit number:");
	scanf("%d",&n);
	a=n%10;
	n=(n/10);
	b=n%10;
	n=(n/10);
	c=((a*100)+(b*10)+n);
	printf("\n Reverse of the number is:%d",c);
	return 0;
}