#include<stdio.h>
#include<math.h>
int add();
int subs();
int mul();
int div();
int sqr();
int sqroot();
int power ();

int main ()
{
	int ch, r;

	printf("\nEnter Your choice of operation:\n1.Addition\n2.Substraction\n3.Multiplication\n4.Division\n5.Square\n6.Square root:\n7.Power: \n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			r=add();
			break;
		case 2:
			r=subs();
			break;
		case 3:
			r=mul();
			break;
		case 4:
			r=div();
			break;
		case 5:
			r=sqr();
			break;
		case 6:
			r=sqroot();
			break;
		case 7:
			r=power();
			break;		
		default:
			printf("\nInvalid choice!!");	
	}
	
	printf("\nThe result is:%d",r);
	return 0;
}

int add()
{
	int x,y;
	printf("\nEnter two numbers:\n");
	scanf("%d %d",&x,&y);
	return x+y;
}

int subs()
{
	int x,y;
	printf("\nEnter two numbers:\n");
	scanf("%d %d",&x,&y);
	return x-y;
}

int mul()
{
	int x,y;
	printf("\nEnter two numbers:\n");
	scanf("%d %d",&x,&y);
	return x*y;
}

int div()
{
	int x,y;
	printf("\nEnter two numbers:\n");
	scanf("%d %d",&x,&y);
	return x/y;
}

int sqr()
{
	int x;
	printf("\nEnter a number:\n");
	scanf("%d",&x);
	return x*x;
}

int sqroot()
{
	int x;
	printf("\nEnter a number:\n");
	scanf("%d",&x);
	return sqrt(x);
}

int power()
{
	int x,y;
	printf("\nEnter number and power:\n");
	scanf("%d%d",&x,&y);
	return pow(x,y);
}
