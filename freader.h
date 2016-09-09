char* read_file(char name[256]){
	FILE *file;
	char *buffer;
	char ch;
	int fsize;
	file = fopen(name,"r");
	if (!file){
		printf("\nFile not found!\n");
		printf("Program terminated.");
		//return 1;
	}
	fseek(file,0,SEEK_END);
	fsize=ftell(file);
	fseek(file,0,SEEK_SET);
	buffer = (char*)malloc(sizeof(char)*(fsize+1));
	if(buffer==NULL){
	   printf("\nMemory error.\n");
	   printf("Program terminated.");
	   //return 1;
	}
	size_t newbuffer = fread(buffer, sizeof(char), fsize, file);
	buffer[++newbuffer] = '\0';
	fclose(file);
    return buffer;
}
