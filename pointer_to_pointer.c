#include <stdio.h>
int main(){
	int a=99;
	int *ptr;
	int **pptr;
	ptr=&a;
	pptr=&ptr;
	printf("address *ptr %x is pointing to %d\n",ptr,*ptr);
	printf("address **pptr %x is pointing to %x\n",pptr,*pptr);
	return 0;
	}
