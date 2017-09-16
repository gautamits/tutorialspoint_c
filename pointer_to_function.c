#include <stdio.h>
void getSeconds();
int main(){
	unsigned long sec;
	getSeconds(&sec);
	printf("time is %ld\n",sec);
	return 0;
	}
void getSeconds(unsigned long *par){
	*par=time();
	return;
	}
