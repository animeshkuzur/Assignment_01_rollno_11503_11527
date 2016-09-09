int length(char str[256]){
	int i=0;int c=0;
	while(str[i]!='\0'){
		i++;
		c++;
	}
	return c;
}
/*int * pattern(char word[256]){
	int l=length(word);
	int m[l-1];int i=0;int j;
	m[0]=0;
	j=1;
	while(j<l){
		if((i>0)&&(word[i]!=word[j]))
			i=m[i];
		if(word[i]==word[j])
			i++;
		m[j]=i;
		j++;
	}
	return m;
}*/
void search_str(char *buffer){
	char word[256];int i=0;int j=1;
	printf("\n\nSearch: ");
	scanf("%s",word);
	//int lm = length(word);
	//printf("%d\n",lm);
	//m=pattern(word);
	int l=length(word);
	int m[l-1];
	m[0]=0;
	while(j<l){
		if((i>0)&&(word[i]!=word[j]))
			i=m[i-1];
		if(word[i]==word[j])
			i++;
		m[j]=i;
		j++;
	}
	i=0;j=1;
	while(*buffer!='\0'){
		if((i>0)&&(word[i]!=*buffer)){
			i=m[i];
			//printf("\nDAMN %d",i);
		}
		if(word[i]==*buffer)
			i++;
		if(i==l){
			printf("\nString found at index: %d\n",(j-l+1));
			i=m[i-1];
			//printf("\nYOLO %d",i);
		}
		//printf("\nNOPE %d",j);
		buffer++;
		j++;
	}
}
