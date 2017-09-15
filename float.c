#include <stdio.h>
#include <float.h>
int main(){
	printf("byte size fr float is %lud\n",sizeof(float));
	printf("minimum size for float is %E\n",FLT_MIN);
	printf("maximum size for float is %E\n",FLT_MAX);
	printf("precision value for float is %d\n",FLT_DIG);
	return 0;
	}
