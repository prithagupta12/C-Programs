#include<stdio.h>

int main()
{
    int a[100][100],b[100][100],mul[100][100],i,j,k,r1,r2,c1,c2;
    printf("Enter number of rows & columns of 1st matrix:\n");
    scanf("%d%d",&r1,&c1);
    printf("Enter number of rows & columns of 2nd matrix:\n");
    scanf("%d%d",&r2,&c2);
    if(c1!=r2)
    {
    printf("Matrix multiplication not possible enter the values again:\n");
    printf("Enter number of rows & columns of 1st matrix:\n");
    scanf("%d%d",&r1,&c1);
    printf("Enter number of rows & columns of 2nd matrix:\n");
    scanf("%d%d",&r2,&c2);
    }
    printf("Enter the values of 1st matrix:\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("Enter a%d%d:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the values of 2nd matix:\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("Enter a%d%d:",i,j);
            scanf("%d",&b[i][j]);
        }
    }

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            mul[i][j]=0;
            for(k=0;k<c1;k++)
            {
                mul[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d  ",mul[i][j]);
        }
        printf("\n");
    }

    return 0;
}
