char * concat(char * dest, char * source){
	char *message = (char *)malloc(256);
    strcpy(message, dest);
    strcat(message, source);
    return message;
}