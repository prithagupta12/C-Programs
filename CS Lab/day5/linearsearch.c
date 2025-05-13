#include<stdio.h>
int main ()
{
	int i, sum=0,n,ser, flag=0 ;
	int a[5];
	
	printf("Enter the elements(5): ");
	
	for (i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\nEnter the value to be searched:");
	scanf("%d",&ser);
	

	for(i=0; i<5;i++)
	{
		if(a[i]==ser)
		{
			flag= 1;
			break;
		}
	}
	if (flag==1)
	{
		printf("\nSearch is successfull");
		printf("\nPosition of the searched element is %d ",i+1);
	}
	if (flag==0)
	{
		printf("\nSearch is unsuccessfull");
	}
	
		

	return 0;
	
}