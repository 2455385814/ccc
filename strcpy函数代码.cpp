#include <stdio.h>
#include <stdlib.h>
#include<string.h>
char*strcopy(char*src){
	int length=strlen(src);
	char *p;
	p=(char*)malloc((length+1)*sizeof(char));
	for(int i=0;i<length;i++){
		p[i]=src[i];
	}
	p[length]='\0';
	return p;
}
/*hl*/
