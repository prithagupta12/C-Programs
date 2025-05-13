#include<stdio.h>
int main ()
{
	int a[10],i, sum=0,n,ser, flag=0 ;
	
	printf("Enter the no of elements(max10): ");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d ",&a[i]);
	}
	
	printf("\nEnter the value to be searched:");
	scanf("%d",&ser);
	

	for(i=0; i<n;i++)
	{
		if(a[i]==ser)
		{
			flag= 1;
			break;
		}
	}
	if (flag==1)
	{
		printf("\nPosition of the searched element is %d ",i);
	}
	
		

	return 0;
	
