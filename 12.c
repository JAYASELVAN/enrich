#include<stdio.h>
int main()
{
    int n,i,j,x,k,a[10][10];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            a[i][j]=0;
        }
    }
    k=n*n;
    i=0;
    j=n/2;
    for(x=1;x<=k;x++)
    {
        a[i][j]=x;
        i--;
        if(i==-1)
        {
            i=n-1;
        }
        j=(j+1)%n;
        if(a[i][j]!=0)
        {
            j--;
            if(j==-1)
            {
                j=n-1;
            }
            i=(i+2)%n;
       }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           printf("%d ", a[i][j]);
           
        }
        printf("\n");
    }
return 0;
}
