#include <stdio.h>
#include "extern.h"
extern int a;
extern int b;
int main(){
	a=5;
	b=10;
	printf("a+b is %d\n",a+b);
	return 0;
	}
