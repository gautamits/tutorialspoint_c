#include <stdio.h>
int main(){
	char *a="hello dear\n";  //legal
	char *b="hello \
dear\n";                         // this too
	char *c="hello ""d" "ear\n";  //still legal
	printf("%s%s%s",a,b,c);
	return 0;
	}
