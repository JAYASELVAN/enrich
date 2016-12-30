#include<stdio.h>
#include<string.h>
char a[20];
int l;
void rem(int n)
{
    while(n<l-1)
    {
        a[n]=a[n+1];
        n++;
    }
    a[--l]='\0';
}
int main()
{
    int i;
    scanf("%s",a);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        if(((a[i]>64)&&(a[i]<91))||((a[i]>96 )&&(a[i]<123))) 
        {
            if(a[i]==65 || a[i]==69|| a[i]==73|| a[i]==79 || a[i]==85 || a[i]==97 || a[i]==101 ||a[i]==111 || a[i]==117 || a[i]== 105)
                rem(i--);
        }
        else
                rem(i);
     }
     printf("%s",a);
     return 0;
}