#include <stdio.h>
int * random(){
	static int r[10];
	srand( (unsigned)time( NULL ) );
	for (int i=0;i<10;i++){
		r[i]=rand();
		printf("r[%d]=%d\n",i,r[i]);
		}
	return r;
	}
int main(){
	int *ptr;
	ptr=random();
	for(int i=0;i<10;i++){
		printf("*ptr + %d = %d\n",i,*(ptr+i));
		}
	return 0;
	}
	
