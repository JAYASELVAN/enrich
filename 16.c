#include<stdio.h>
#include<conio>

int x=2,y=1,a[4][4];
void display()
{
	int i,j;
	printf("____________");
	for(i=0;i<4;i++)
	{
		printf("| ");
		for(j=0;j<4;j++)
		{
			printf("%c |",a[i][j]);
		}
		printf("____________");
	}
}

void down()
{
	int t;
	t=a[(x+1)%4][y];
	a[(x+1)%4][y]=a[x][y];
	a[x][y]=t;
	x=(x+1)%4;
	
}

void up()
{
	int t,n;
	n=x-1<0?4:x-1;
	t=a[n][y];
	a[n][y]=a[x][y];
	a[x][y]=t;
	x=n;
	
}

void right()
{
	int t;
	t=a[x][(y+1)%4];
	a[x][(y+1)%4]=a[x][y];
	a[x][y]=t;
	y=(y+1)%4;
	
}

void left()
{
	int t,n;
	n=y-1<0?4:x-1;
	t=a[x][n];
	a[x][n]=a[x][y];
	a[x][y]=t;
	y=n;
	
}

int main()
{
	int i,j,c=1;
	char ch='';
	for(i=5;i>1;i--)
	{
		for(j=0;j<4;j++)
		{
			if(i==2 && j==1)
			{
				a[i%4][j]=0;
			}
			else
			{
				a[i%4][j]=c++;
			}
		}
	}
	do
	{
		clrscr();
		display();
		printf("\n\nPress U->UP , D->Down , R->Right , L->Left , Q->Quit\nEnter a Character\n");
		scanf("%c",ch);
		switch(ch)
		{
			case 'U':
				up();
				break;
			case 'L':
				left();
				break;
			case 'D':
				down();
				break;
			case 'R':
				right();
				break;
			case 'Q':
				return 0;
		}
		
	}
}
