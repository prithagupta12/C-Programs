#include<stdio.h>
int main()
{
	int a,b,c;
	float avg;
	
	printf("Enter 3 integers:\n");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	
	avg=(a+b+c)/3;
	


	printf("\nAverage is:%f",avg);
	
	return 0;
}