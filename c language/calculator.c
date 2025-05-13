#include<stdio.h>
int main()
{
    int x,y,z;
    printf("1.Add\n"
           "2.Substract\n"
           "3.Multiply\n"
           "4.Divide\n");
    printf("Write the serial number of the operation which you want to do:\n");
    scanf("%d",&x);
    printf("Your entered choice is serial num %d\n",x);
    switch(x)
    {
        case 1:
            printf("Write two numbers: \n");
            scanf("%d%d",&y,&z);
            printf("The sum is %d",y+z);
            break;

        case 2:
            printf("Write two numbers:\n");
            scanf("%d%d",&y,&z);
            printf("The result is %d",y-z);
            break;

        case 3:
            printf("Write two numbers:\n");
            scanf("%d%d",&y,&z);
            printf("The result is %d",y*z);
            break;

        case 4:
            printf("Write two numbers:\n");
            scanf("%d%d",&y,&z);
            printf("The result is %d",y/z);
            break;

        default:
            printf("Your entered choice is not among the given list.Kindly select the right choice \n");
    }
    return 0;
}
