#include<stdio.h>
int main ()
{
	float m1,m2,m3, marks;
	printf("Enter marks in Physics:");
	scanf("%f",&m1);
	printf("\nEnter marks of Chemistry:");
	scanf("%f",&m2);
	printf("\nEnter marks of Mathematics:");
	scanf("%f",&m3);
	
	marks=(m1+m2+m3)/3;
	
	if(marks>=91 && marks<=100)
	{
		printf("\nGrade obtained: O");
	}
	else if(marks>=81 && marks<=90)
	{
		printf("\nGrade obtained: E");
	}
	else if(marks>=71 && marks<=80)
	{
		printf("\nGrade obtained: A");
	}
	else if(marks>=61 && marks<=70)
	{
		printf("\nGrade obtained: B");
	}
		else if(marks>=51 && marks<=60)
	{
		printf("\nGrade obtained: C");
		
	}
		else if(marks>=40 && marks<=50)
	{
		printf("\nGrade obtained: D");
	}
		else if(marks<40)
	{
		printf("\nGrade obtained: F");
	}
	
	
	return 0;
		
}