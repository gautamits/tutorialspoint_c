#include <stdio.h>
int *getRandom(){
	static int r[10];
	int i;
	//set the seed
	srand((unsigned)time(NULL));
	for (i=0;i<10;i++){
		r[i]=rand();
		printf("%d\n",r[i]);
	}
	return r;
	}
int main(){
	int *p;
	int i;
	p=getRandom();
	for(i=0;i<10;i++){
		printf("*(p+%d) is %d\n",i,*(p+i));
	}
	return 0;
	} 
