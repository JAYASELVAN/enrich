#include<stdio.h>

int a[1024][10],ai=1;
int ns=1,list[10],n;

void subset(int index)
{
	int i,j;
	
	for(i=0;i<ns;i++)
	{
		j=0;
		while(a[i][j]!=-1)
		{
			a[ai][j]=a[i][j];
			j++;
		}
		a[ai][j++]=list[index];
		a[ai++][j]=-1;
	}
	ns=ai;
	if(index!=n-1)
	{
		subset(index+1);
	}
	
	
}


void print_set()
{
  int i,j;
  for(i=0;i<ns;i++)
	{
		printf("{");
		j=0;
		while(a[i][j]!=-1)
		{
			printf("%d",a[i][j++]);
			if(a[i][j]!=-1)
			{
				printf(",");
			}
		}
		printf("}\n");
	}
}
	



void main()
{
	int i;
	scanf("%d",&n);
	a[0][0]=-1;
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&list[i]);
	}
	subset(0);
	print_set();
}
