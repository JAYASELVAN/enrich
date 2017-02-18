#include <stdio.h>
float p=1000;
float si(int,float);
float cm(float intr);
int main(void) 
{
	int mon=12;
	int per=3;
	float inr=12;
	int j=mon/per;
	int i;
	for(i=1;i<=j;i++)
	{
		float sum=si(per,inr);
		float total=cm(sum);
	}
	printf("%f",p);
	return 0;
}
float si(int m,float i)
{
	
    float tot=(p*m*i)/1200;
	return tot;
}
float cm(float intr)
{
	p=p+intr;
}
