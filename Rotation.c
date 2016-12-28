#include<stdio.h>
int main()
{
		int n,s,i,r;
		scanf("%d%d",&n,&s);
		for(i=0;i<s;i++){
				r=n%10000;
				n=(n/10000)+(r*10);
			}
			printf("Rotated integers:%d",n);
  return 0;

}

