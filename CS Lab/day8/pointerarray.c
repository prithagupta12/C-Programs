#include<stdio.h>
int main ()
{
	int a[5]={10,20,30,40,50};
	int *p;
	int i;
	
	p=a; //p=&a[0];
	
	for(i=0;i<5;i++)
	{
 
		printf("\nValue is:%d",*(p+i));

		printf("\nValue is:%u",(p+i)); 
	}
	
	return 0;
	
}
