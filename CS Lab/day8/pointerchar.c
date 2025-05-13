#include<stdio.h>
int main () 
{
	char a;
	char *p;

	a='a';
	p=&a;

	printf("\n %c",a);
	printf("\n %u",&a);
	printf("\n %u",p);
	printf("\n %c",*p);

	return 0;

}
