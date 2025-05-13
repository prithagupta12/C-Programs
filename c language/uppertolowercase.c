j//Enter uppercase to lowercase and vice versa
#include<stdio.h>
int main()
{
    char a;
    printf("Enter a letter:");
    scanf("%c",&a);
    if(a>=65 && a<=90)
    {
        printf("\n This is an upper case");
        a=a+32;
        printf("\n Its lowercase is %c",a);
    }
    if(a>=97 && a<=122)
    {
        printf("\nThis is a lowercase");
        a=a-32;
        printf("\n Its uppercase is %c",a);
    }
    return 0;
}
