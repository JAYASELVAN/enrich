#include<stdio.h>

int main()
{
    int i,l=0,j,n;
    int a[10],r;
    scanf("%d",&n);
    while(n>0)
    {
        a[l++]=n%10;
        n=n/10;
    } 
    for(i=0;i<l;i++)
    {
        for(j=i+1;j<l;j++)
        {
            if(a[i]>a[j])
            {
                r=a[i];
                a[i]=a[j];
                a[j]=r;
            }
        }
    }
    n=0;
    for(i=0;i<l;i++)
        n=(n*10)+a[i];
    printf("%d",n);
    return 0;
}
    
