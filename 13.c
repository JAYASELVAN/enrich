#include <stdio.h>
int isprime(int n)
{
    int i,f=1;
    for(i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
            f=0;
            break;
        }
    }
    return f;
}

int main(void) 
{
    int n;
    scanf("%d",&n);
    n++;
    while(isprime(n++)!=1);
    n--;
    printf("%d",n);
	return 0;
}

