#include <stdio.h>
int count(int *a,int n,int k)
{
    int c=0,i;
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            c++;
        }
        else if(a[i]>k)
        {
            break;
        }
    }
    return c;
}
int main(void) {
	int n,a[100],i,k;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	scanf("%d",&k);
	printf("%d",count(a,n,k));
	return 0;
}

