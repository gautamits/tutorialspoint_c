#include <stdio.h>
int main(){
	int arr[]={10,200,3000};
	int *ptr;
	ptr=arr;
	for(int i=0;i<3;i++){
		printf("Address of var[%d] = %x\n", i, ptr );
		printf("Value of var[%d] = %d\n", i, *ptr );
		ptr++;
	}
	return 0;
	}
	
