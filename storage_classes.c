#include <stdio.h>
#include "extern.h"
void func(int count);
int main(){
	//auto is default. no difference between following two
	int month;
	auto int year;
	//register tells that try to keep it into register because frequently used. cannot be used with & because not stored in memory
	register int i=1;
	
	while (i<=10) {
	printf("%d\t",i);
	i++;
	}
	printf("\n");
	//static tells compiler to keep object throughout the program instead of inintialisng and destroying it again and again
	static int s=5;
	while(s--){
		func(s);
		}
		
	//when extern is used then variable is not inintialised but previous inintialisation is used instead.
	extern int a,b;
	a=5;
	b=10;
	printf("sum is %d\n",a+b);
	}
void func(int count){
	static int i=5;
	i++;
	printf("i is %d and count is %d\n",i,count);
	}
	
