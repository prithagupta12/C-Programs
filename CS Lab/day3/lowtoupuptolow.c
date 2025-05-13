#include<stdio.h>
int main ()
{
	char a;
	printf("Enter a character:");
	scanf(" %c",&a);
	
	if(a>=65 && a<=90)
	{
		printf("\n Entered character is Uppercase");
		a=a+32;
		printf("\n Lowercase is: %c",a);
	
	}
	else if (a>=97 && a<=122)
	{
		printf("\n Entered character is Lowercase");
		a=a-32;
		printf("\n Uppercase is: %c",a);
	}
	else
	{
		printf("\n Entered character is not alphabet");
	}

	
	return 0;
		
}