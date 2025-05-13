#include<stdio.h>
int main ()
{
	int a[100],i, sum=0,n ;
	
	printf("Enter the no of element(max100): ");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum= sum+a[i];
	}
	
	printf("\nSummation is %d",sum);
		

	return 0;
	
}