#include<stdio.h>
int main()
{
    int n,m,k,i,j,a[10][10];
    scanf("%d%d%d",&n,&m,&k);
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
        {
            if(i+j == k)
                a[i][j]=1;
            else 
                a[i][j]=0;
            printf("%d ",a[i][j]);
        }
    return 0;
}
