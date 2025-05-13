//check whether you have enter uppercase,lowercase,special symbol,digits.
#include<stdio.h>
int main()
{
    char a;
    printf("Enter a character:");
    scanf("%c",&a);
    if(a>=65 && a<=90)
    {
            printf("This is uppercase");
    }
    else if(a>=97 && a<=122)
    {
        printf("This is lowercase");
    }
    else if(a>=48 && a<=57)
    {
        printf("This is digit");
    }
    else
    {
        printf("This is special symbol");
    }
    return 0;

}
