//void pointers can be typecasted to any data type
#include <stdio.h>
int main(){
	int n=5;
	char c='c';
	void *ptr;// declare void pointer
	ptr=&n;   // assign address of integer to void pointer
	printf("void typecasted to int %d\n",*((int*)ptr)); // int* typecastes and *(something) is for dereferencing
	ptr=&c;
	printf("void typecasted to char %c\n",*(char*)ptr);
	return 0;
	}
