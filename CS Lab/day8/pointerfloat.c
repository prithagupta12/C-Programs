#include<stdio.h>
int main () 
{
	float a;
	float *p;

	a=100.5;
	p=&a;

	printf("\n %f",a);
	printf("\n %u",&a);
	printf("\n %u",p);
	printf("\n %f",*p);

	return 0;

}
