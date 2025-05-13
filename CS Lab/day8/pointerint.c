#include<stdio.h>
int main () 
{
	int a;
	int *p;

	a=5;
	p=&a;

	printf("\n %d",a);
	printf("\n %u",&a);
	printf("\n %u",p);
	printf("\n %d",*p);

	return 0;

}
