/*find whether a person can give vote or not*/
#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age:");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("The person can give vote");
    }
    else
    {
        printf("The person can't give vote");
    }
    return 0;
}
