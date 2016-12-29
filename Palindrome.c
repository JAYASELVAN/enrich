#include<stdio.h>
int main()
{
    int i,n,s=0,r;
    scanf("%d",&n);
    i=n;
    while(n>0)
    {
        r=n%10;
        n/=10;
        s=(s*10)+r;
    }
    if(i==s)
        printf("Yes");
    else
        printf(No");
    return 0;
}
