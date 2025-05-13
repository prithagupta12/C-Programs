#include<stdio.h>
int main ()
{
	float p,r,t,i;
	printf("\nEnter principal amount:");
	scanf("%f",&p);
	printf("\nEnter rate of interest:");
	scanf("%f",&r);
	printf("\nEnter time period:");
	scanf("%f",&t);
	i=((p*r*t)/100);
	printf("\nSimple interest will be: %f",i);
	return 0;
}