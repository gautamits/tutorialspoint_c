#include <stdio.h>
int main(){
	int arr[]={10,200,3000};
	int *ptr[3];//this will hold the pointers to arrays,ints or chars. whatever
	for(int i=0;i<3;i++){
		ptr[i]=&arr[i];
	}
	for(int i=0;i<3;i++){
		printf("value at location %x is %d\n",ptr[i],*ptr[i]);
	}
	return 0;
	}
