#include<stdio.h>
int main ()
{
	int a[5]={10,20,30,40,50};

	int i;
	

	
	for(i=0;i<5;i++)
	{
		printf("\nValue is:%d",a[i]);  
		printf("\nValue is:%u",&a[i]); 
	}
	
	return 0;
	
}
