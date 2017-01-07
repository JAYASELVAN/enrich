#include <stdio.h>
void get_array(float a[][10],int n)
{
    int i,j;
    for(i=0;i<n;i++)
	{
	    for(j=0;j<n;j++)
	    {
	        scanf("%f",&a[i][j]);
	        
	    }
	}
}

void put_array(float a[][10],int n)
{
    int i,j;
    for(i=0;i<n;i++)
	{
	    for(j=0;j<n;j++)
	    {
	        printf("%.2f ",a[i][j]);
	    }
	    printf("\n");
	}
}



int main(void) {
	
	int i,j,k,n;
	float a[10][10],m,t,sum=1;
	scanf("%d",&n);
	get_array(a,n);
	
	for(i=0;i<n;i++)
	{
	    for(j=i+1;j<n;j++)
	    {
	        m=a[j][i]/a[i][i];
	        if(m==0)
	        {
	            m=1;
	        }
	        for(k=i;k<n;k++)
	        {
	            a[j][k]-=m*a[i][k];
	        }
	    }
	    sum*=a[i][i];
	}
	put_array(a,n);

	printf("%.2f",sum);
	return 0;
}

