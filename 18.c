#include<stdio.h>

void print_set(int a[][],int n)
{
  int i,j;
  for(i=0;i<n;i++)
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
	int a[1024][10],list[10],temp[10];
	int i,n,ns=1,ai=1,j,k,f;
	scanf("%d",&n);
	a[0][0]=-1;
	for(i=0;i<n;i++)
	{
		scanf("%d",&list[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<ns;j++)
		{
			k=0;
			f=0;
			while(a[j][k]!=-1)
			{
				if(a[j][k++]==list[i])
				{
					f=1;
					break;
				}
			}
			k=0;
			if(f!=1)
			{
				
				while(a[j][k]!=-1)
				{
					a[ai][k]=a[j][k];
					k++;
					
				}
				a[ai][k++]=list[i];
				a[ai][k]=-1;
				ai++;
			}
			
		}
		ns=ai;
		
	}
	
	print_set(a[][],ns);
	
}
