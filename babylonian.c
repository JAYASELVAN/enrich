#include <stdio.h>

int main(void) {
	float i,n,t;
	float s,e=0;
	scanf("%f",&n);
	s=n/2;
	t=n/2;
	while((int)((t*t)-n)!=0)
	{
	    
	    if(t*t>n)
	    {
	        s=t;
	    }
	    else if(t*t<n)
	    {
	        e=t;
	    }
	    t=(s+e)/2;
	    
	}
	printf("%.1f\n",t);
	
}

