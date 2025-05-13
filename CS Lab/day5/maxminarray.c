#include<stdio.h>
int main ()
{
	int a[100],i,n,max, min ;
	
	printf("Enter the no of element(max 100):");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);

	}
	
	max=a[0];a
	.02356
	min=a[0];
	
	for (i=0;i<n;i++)
	{
	
		if(a[i]<min)
		{
			min=a[i];
		}
		if(a[i]>max)
		{
			max= a[i];
		}
	}
	
	printf("\nMax = %d",max);
	printf("\nMin = %d",min);
		

	return 0;
	
}