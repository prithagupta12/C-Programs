/*to find out the reverse of a three digit num*/
#include<stdio.h>
int main()
{
    int n,r1,r2,r3,rev;
    printf("Enter a 3 digit num:");
    scanf("%d",&n);

    r1=n%10;
    n=n/10;

    r2=n%10;
    n=n/10;

    r3=n; //or we can use r3=n%10;

    rev=100*r1+10*r2+1*r3;
    printf("The reverse of the num is %d",rev);
    return 0;
}
