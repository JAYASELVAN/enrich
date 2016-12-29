#include<stdio.h>
#include<string.h>
int main()
{
    int i=0,r,f=1,l;
    char n[10];
    scanf("%s",n);
    l=strlen(n);
    for(i=0;i<l/2;i++)
    {
        if(n[i]!=n[l-i-1])
        {
            f=0;
            break;
        }
    }
    if(f==1)
        printf("Yes");
    else
        printf(No");
    return 0;
}
    
