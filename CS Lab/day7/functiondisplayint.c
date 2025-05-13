#include<stdio.h>
void display (int);
int main ()
{
	int i;
	i=5;
	display(i); //actual parameter
	return 0;
}
void display (int a) //formal parameter
{
	printf("\nThis is my second function");
	printf("\nValue is: %d",a);
}
