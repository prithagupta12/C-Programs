#include<stdio.h>
int main()
{
    int a[100][100],trans[100][100],i,j,m,n;
    printf("Enter the number of rows:");
    scanf("%d",&m);
    printf("Enter the number of column:");
    scanf("%d",&n);
    printf("Enter the values of matrix:");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter a%d%d:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            trans[j][i]=a[i][j];
        }
    }
    for(j=0;j<n;j++)
    {
        for(i=0;i<m;i++)
        {
            printf("%d ",trans[j][i]);
        }
        printf("\n");
    }
    return 0;
}
