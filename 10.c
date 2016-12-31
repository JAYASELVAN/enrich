#include <stdio.h>
#include<string.h>

int main(void) {
	char a[20];
	int l,i,j,c,f=0;
	scanf("%s",a);
	l=strlen(a);
	for(i=0;i<l;i++)
	{
	    c=1;
	    for(j=i+1;j<l && a[i]!='?';j++)
	    {
	        if(a[j]==a[i])
	        {
	            a[j]='?';
	            c++;
	        }
	    }
	    if(a[i]!='?' && c%2==1){
	        f++;
	    }
	    if(f>1)
	    {
	        printf("NO");
	        return 0;
	    }
	}
	printf("Yes");
	return 0;
}

