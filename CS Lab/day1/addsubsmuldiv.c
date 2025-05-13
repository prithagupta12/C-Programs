#include<stdio.h>
int main()
{
	int a=20;
	int b=10;
	int res1, res2, res3;
	float res4;
	
	res1= a+b;
	res2= a-b;
	res3= a*b;
	res4= a/b;
	
	printf("\nAddition result is:%d",res1);
	printf("\nSubstraction result is:%d",res2);
	printf("\nMultiplication result is:%d",res3);
	printf("\nDivision value is:%f",res4);
	
	return 0;
}