#include<stdio.h>
#include"freader.h"
#include"parser.h"
int main(){
	char name[256];
	char *text;
	int c=0;
	printf("NLP Assignment 1\n\n");
	printf("KMP Algorithm implementation\n");
	printf("Author: Animesh A. Kujur\n\n\n");
	printf("Enter name of the text file(.txt): ");
	scanf("%s", name);
	text=read_file(name);
	int words = count_words(text);
	int para = count_para(text);
	int chara = count_chara(text);
	printf("%d\n",para);
	printf("%d\n",words);
	printf("%d\n",chara);
    return 0;
}
