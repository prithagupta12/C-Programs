#include<stdio.h>
int main ()
{
	int a[5],i,j,pos,swap;
	
	printf("Enter 5 elements of the array:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<4;i++)
	{
		pos=i;
		for(j=i+1;j<5;j++)
		{
			if(a[pos]>a[j])
			{
				pos=j;
	  		}
		}
			if(pos!=i)
			{
				swap=a[i];
				a[i]=a[pos];
				a[pos]=swap;
			}
		
	}
	
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}