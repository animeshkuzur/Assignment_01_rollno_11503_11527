#include<stdio.h>
#include"freader.h"
#include"functions.h"
int main(){
	char name[256];
	char *text;
	printf("NLP Assignment 1\n\n");
	printf("KMP Algorithm implementation\n");
	printf("Author: Animesh A. Kujur\n\n\n");
	printf("Enter name of the text file(.txt): ");
	scanf("%s", name);
	
	int para = count_para(text);
	printf(text);
	printf("%c",text);
	//printf(text);
	//printf("%s",text[0]);
	/*char * i=text;
	while(*i!="\0"){
		printf("%c",*i);
		i++;
	}*/
	
	printf(para);
    return 0;
}
