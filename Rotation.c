#include<stdio.h>
int main()
{
		int n,s,r;
		scanf("%d%d",&n,&s);
		for(i=0;i<s;i++){
				r=n%10;
				n=(n/10)+(r*1000);
			}
			printf("Rotated integers:%d",n);
  return 0;

}
