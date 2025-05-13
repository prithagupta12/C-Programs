/*num is positive or negative*/
#include<stdio.h>
int main()
{
    int a;
    printf("Enter the num:");
    scanf("%d",&a);
    if(a>=0)
    {
        printf("The num is positive");
    }
    else
    {
        printf("The num is negative");
    }
    return 0;
}
