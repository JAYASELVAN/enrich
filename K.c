#include<stdio.h>
int main()
{
    int n,m,k,i,j,a[10][10]={0};
    scanf("%d%d%d",n,m,k);
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
        {
            if(i+j == k)
                a[i]=1;
            printf("%d ",&a[i]);
        }
    return 0;
}