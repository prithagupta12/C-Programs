#include<stdio.h>
int getmatrixinput(int a[100][100],int r, int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
}
int mulmatrix(int mul[100][100],int a[100][100],int b[100][100],int r1,int c1,int r2,int c2,int k)
{
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            mul[i][j]=0;
            for(k=0;k<c1;k++)
            {
                mul[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            printf("%d  ",mul[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int mul[100][100],a[100][100],b[100][100],r1,r2,c1,c2,k;
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
    printf("Enter the values of 1st matrix:");
    getmatrixinput(a,r1,c1);
    printf("Enter the values of 2nd matrix:");
    getmatrixinput(b,r2,c2);
    printf("Matrix Multiplication:\n");
    mulmatrix(mul,a,b,r1,r2,c1,c2,k);

}
