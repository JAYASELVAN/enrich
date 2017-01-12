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
        for(j=i+1;j<l;j++)
        {
            if(n[i]>n[j])
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
    
