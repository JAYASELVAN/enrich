#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,l;
    char n[10],r;
    scanf("%s",n);
    l=strlen(n);
    for(i=0;i<l-1;i++)
    {
        for(j=0;j<l-1;j++)
        {
            if(n[i]<n[j])
            {
                r=n[i];
                n[i]=n[j];
                n[j]=r;
            }
        }
    }
    printf("%s",n);
    return 0;
}
    
