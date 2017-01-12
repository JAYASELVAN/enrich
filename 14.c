#include <stdio.h>
#include<string.h>

int main(void) {
    char n[20];
    int l,i;
    scanf("%s",n);
    l=strlen(n);
    for(i=0;i<=l/2;i++)
    {
        if(n[i]!=n[l-i-1])
        {
            n[l-i-1]=n[i];
        }
    }
    printf("%s",n);
	return 0;
}

