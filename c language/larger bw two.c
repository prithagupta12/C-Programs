/*which one is larger b/w 2 integers*/
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two integers:");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        printf("%d is largest num",a);
    }
    if(b>a)
    {
        printf("%d is largest num",b);
    }
    return 0;
}
