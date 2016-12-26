#include<iostream>
using namespace std;
int main()
{
	int n,i=0,s=0,r;
	cin>>n;
	while(n>0){
		r=n%10;
		n=n/10;
		i++;
		s+=r;
	}
	cout<<"Sum of integers:"<<s;
	cout<<"\nNumber of digits:"<<i;
  return 0;
}
