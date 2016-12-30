#include<stdio.h>
#include<string.h>
int main()
{
    char a[30];
    int l,i;
    scanf("%s",a);
    l=strlen(a);
    for(i=0;i<l/2;i++)
    {
        if(a[i]!=a[l-1-i])
        {
            printf("No");
            return 0;
        }
     
     }   
     printf ("Yes");
     return 0;
}
