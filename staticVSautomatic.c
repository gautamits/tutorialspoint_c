#include <stdio.h>
int main(){
	for(int i=0;i<5;i++){
		int n=0;
		printf("%d ",++n);
		
	}
	printf("\n");
	for(int i=0;i<5;i++){
		static int n=0;
		printf("%d ",++n);
	}
	printf("\n");
}
		
