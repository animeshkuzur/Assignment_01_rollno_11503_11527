char* read_file(char name[256]){
	FILE *file;
	char *buffer;
	int fsize;
	file = fopen(name,"r");
	if (!file){
		printf("\nFile found!\n");
		printf("Program terminated.");
		return 1;
	}
	fseek(file,0,SEEK_END);
	fsize=ftell(file);
	fseek(file,0,SEEK_SET);
	buffer = malloc(sizeof(char)*(fsize+1));
	if(buffer==NULL){
	   printf("\nMemory error.\n");
	   printf("Program terminated.");
	   return 1;
	}
	/*size_t newbuffer = fread(buffer, sizeof(char), fsize, file);
	/*buffer[++newbuffer] = '\0';
	/*int i=0; char c;
	while(c!=EOF){
		c=fgetc(file);
		buffer[i]=c;
		i++;
	}*/
	fclose(file);
    return buffer;
}
