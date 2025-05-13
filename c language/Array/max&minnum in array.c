//to find out the maximum and minimum numbers in an array.
#include<stdio.h>
int main()
{
    int a[5],i,max,min;
    printf("Enter 5 numbers:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[0];
    for(i=0;i<5;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("\n Max=%d",max);
    printf("\n Min=%d",min);
    return 0;
}
