/*find out the largest num among 3 integers*/
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("%d is the largest num",a);
        }
    }
    if(b>a)
    {
        if(b>c)
        {
            printf("%d is the largest num",b);
        }
    }
    if(c>a)
    {
        if(c>b)
        {
            printf("%d is the largest num",c);
        }
    }
    return 0;
}
