#include <stdio.h>
void getAverage(int *arr,int size, float *avg){
	int sum=0; 
	for(int i=0;i < size;i++){
		sum+=arr[i];
		}
	*avg=(float)sum/size;
	return;
	}
int main(){
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int size=10;
	float avg=0;
	getAverage(arr,size,&avg);
	printf("average is %f\n",avg);
	return 0;
	}
