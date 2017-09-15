#include <stdio.h>
int main(){
	int p=20;
	int *ip;
	ip=&p;
	printf("address of p is %x\n",&p);
	printf("ip is pointing to %x\n",ip);
	printf("ip dreferenced is %d\n",*ip);
	return 0;
	}
