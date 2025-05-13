#include<stdio.h>
void swap(int*,int*);
int main ()
{
	int a,b;
	
	printf("Enter a:");
	scanf("%d",&a);
	printf("\nEnter b:");
	scanf("%d",&b);
	
	swap(&a,&b);
	
	printf("\nAfter swapping a is:%d",a);
	printf("\nAfter swapping b is:%d",b);
	
	return 0;
}

void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	

	
}
