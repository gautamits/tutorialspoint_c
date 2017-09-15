#include <stdio.h>
int main(){
	int fifty[10]={0,1,2,3,4,5,6,7,8,9};
	int *p;
	p=fifty;
	for ( int i=0;i<10;i++){
		printf("%d\n",*(p+i));
	}
	for ( int i=0;i<10;i++){
		printf("%d\n",*(fifty+i));
	}
	return 0;
	}
