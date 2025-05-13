#include<stdio.h>
int main ()
{
	int a[5],i,j,swap;
	
	printf("Enter 5 elements of the array:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<5-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				swap=a[j];
				a[j]=a[j+1];
				a[j+1]=swap;
	  		}
		}
		
	}
	
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}

		
