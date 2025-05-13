/*check whether a num is odd or even*/
#include<stdio.h>
int main()
{
    int a;
    printf("enter a num:");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("The num is even");
    }
    else
    {
        printf("The num is odd");
    }
    return 0;
}
