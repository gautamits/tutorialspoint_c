#include <stdio.h>
int main(){
	int arr[]={10,200,3000};
	int *ptr;
	ptr=arr;
	while(ptr<=&arr[2]){
		printf("Address of = %x\n", ptr );
		printf("Value of = %d\n", *ptr );
		ptr++;
	}
	return 0;
	}
