//average of the odd terms of an 2D array of dimensions m*n,m,n are bring input
#include<stdio.h>
int main()
{
    int a[100][100],i,j,m,n,sum=0,count=0,avg;
    printf("Enter m:");
    scanf("%d",&m);
    printf("Enter n:");
    scanf("%d",&n);
    printf("Enter the values of the terms of matrix:");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if((i+j)%2!=0)
            {
                sum=sum+a[i][j];
                count=count+1;
            }
        }
    }
    avg=sum/count;
    printf("Result=%d",avg);
    return 0;
}

