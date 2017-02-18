# include<stdio.h>
# include<math.h>
float calcom(int p,float r,int n,int t);
int main(void)
{
	int pr=1500,ti=40,mofr=24;
	float ra=3.5;
	float tim=ti/12;
	float monfr=mofr/12;
	float rate=ra/100;
	float lastprin=calcom(pr,rate,monfr,tim);
	printf("%f",lastprin);
	return 0;
}
float calcom(int p,float r,int n,int t)
{
	float to=n*t;
	float in=1+(r/n);
	float im=pow(in,to);
	float tot=im*p;
	return tot;
}

