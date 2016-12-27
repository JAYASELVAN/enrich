#include<iostream>
using namespace std;
int main()
{
	int n,s=0,r;
	cin>>n;
	while(n>0){
		r=n%10;
		n=n/10;
		s*=10;
		s+=r;
	}
	cout<<"Reverse of integers:"<<s;
  return 0;
}
