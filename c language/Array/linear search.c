//to perform the linear search in an array.
#include<stdio.h>
int main()
{
    int a[5],i,key,flag=0;
    printf("Enter 5 numbers:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the number which you want to search:");
    scanf("%d",&key);
    for(i=0;i<5;i++)
    {
        if(key==a[i])
        {
            printf("\nYour search is successful");
            printf("\nYour searched element is located at %d",i+1);
            flag=1;
        }
    }
    if(flag==0)
        {
            printf("\nYour search is unsuccessful");
            printf("\nYour searched element is not present");
        }
    return 0;
}
