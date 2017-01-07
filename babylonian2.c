#include <stdio.h>

int main(void) {
	int n,i=2,s=2,c;
	scanf("d",&n);
    while(s<n){
        s=i*i;
        i++;
    }
    i--;
    c=(i+(n/i))/2;
    printf("%d",c);
	return 0;
}

