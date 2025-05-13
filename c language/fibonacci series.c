//Write a c program to generate the fibonacci series of first n number of terms
#include<stdio.h>
int main()
{
    int i,n,num1=0,num2=1,fibo;
    printf("Enter the num of terms to generate the fibonacci series:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        if(i<=1)
        {
            fibo=i;
        }
        else
        {
            fibo=num1+num2;
            num1=num2;
            num2=fibo;
        }
        printf("%d",fibo);
    }
    return 0;
    
}
