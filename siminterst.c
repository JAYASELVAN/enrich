#include <stdio.h>
	float si(int p,int m,float i);
	int main(void) {
	int prin=300;
	int mon=34;
	float n=mon/12;
	float intr=3.5;
	float inr=intr/100;
	float sum=si(prin,mon,inr);
	printf("%f",sum);
	return 0;
}
float si(int p,int m,float i)
{
	
    float tot=p*n*i;
	return tot;
}

