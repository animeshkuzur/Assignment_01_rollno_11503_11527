#include<stdio.h>
#include"freader.h"
#include"parser.h"
#include"kmp.h"
void start();
int main(){
	start();
    return 0;
}
void start(){
	char name[256],word[256];
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
	printf("\nParagraphs in the document: %d\n",para);
	printf("Words in the document: %d\n",words);
	printf("Characters in the document: %d\n",chara);
	search_str(text);
	
}
