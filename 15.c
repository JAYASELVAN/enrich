#include <stdio.h>
#include<windows.h>

int main(void) {
    char a[]="HAPPY PONGAL";
    int i;
    for(i=0;i<12;i++)
    {
        printf("%c",a[i]);
		fflush(stdout);
        Sleep(1000);
    }
	
	return 0;
}

