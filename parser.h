int count_words(char *buffer){
	int c=0;
	while(*buffer!='\0'){
		if(*buffer==' ')
			c++;		
		buffer++;
	}
	c++;
	return c;
}
int count_para(char *buffer){
	int c=0;
	while(*buffer!='\0'){
		if(*buffer=='\n')
			c++;
		buffer++;
	}
	return c;
}
int count_chara(char *buffer){
	int c=0;
	while(*buffer!='\0'){
		c++;
		buffer++;
	}
	return c;
}
