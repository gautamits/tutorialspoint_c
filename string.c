#include <stdio.h>
#include <string.h>
int main(){
	char first[]="amit";
	char second[]="gautam";
	char third[2];
	//strcat concatenates two strings
	printf("strcat(%s,%s) will give %s\n",first,second,strcat(first,second));
	//strlen returns length of string
	printf("length of %s after concatenation is %ld\n",first,strlen(first));
	//strchr gives first occurence of character in string
	printf("first occurence of %c in %s is at pointer %x\n",'g',first,strchr(first,'g'));
	
	//strcpy(first,second) copies second to first
	strcpy(third,second);
	printf("third became %s\n",third);
	return 0;
	}
