#include<stdio.h>
int main ()
{
	char a;
	printf("Enter a character:");
	scanf(" %c",&a);
	
	if(a>=65 && a<=90)
	{
		printf("\n Entered character is Uppercase");
	}
	else if(a>=97 && a<=122)
	{
		printf("\n Entered character is Lowercase");
	}
	else if(a>=48 && a<=57)
	{
		printf("\n Entered character is Digit");
	}
	else
	{
		printf("\n Entered character is Special Symbols");
	}
	
	return 0;
		
}