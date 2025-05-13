//to find the largest number in an array.
#include<stdio.h>
int main()
{
    int a[10],size,i,largest,position;
    printf("Enter the size of an array:");
    scanf("%d",&size);
    printf("Enter the %d elements of an array",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    largest=a[0];
    for(i=0;i<size;i++)
    {
        if(a[i]>largest)
        {
           largest=a[i];
           position=i+1;
        }
    }
    printf("\nThe largest number is %d",largest);
    printf("\nposition=%d",position);
    return 0;
}
