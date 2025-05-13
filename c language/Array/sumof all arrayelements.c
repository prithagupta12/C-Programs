//to find out the solution of all the elements of an array.

#include<stdio.h>
int main()
{
    int a[5],i,sum=0;
    printf("Enter 5 numbers:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    /*for(i=0;i<5;i++)
    {
        sum=sum+a[i];
    }*/
    printf("%d",sum);
    return 0;
}
