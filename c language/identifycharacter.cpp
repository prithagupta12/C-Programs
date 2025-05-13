#include<stdio.h>
int main()
{
    int a;
    printf("Enter a character:");
    scanf("%c",&a);
    if(a>=65 && a<=90)
    {
        printf("This is Uppercase");
    }
    else if(a>=97 && a<=122)
    {
        printf("This is Lowercase");
    }
    else if(a>=48 && a<=57)
    {
        printf("This is digit");
    }
    else
    {
        printf("This is a special symbol");
    }
    return 0;
}
