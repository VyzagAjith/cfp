#include <stdio.h>
#include <stdlib.h>
#include "lexer.h"
void LEX_source_code(const char *source)
    {
	FILE *file = fopen(source, "r");
	
	if (!file){
	    perror("No file with the name given");
	    exit(1);
	}
	else if (file == NULL){
	    printf("Nothing in %s to be read", source);
	    exit(2);
	}
	else 
	    printf("Reading the file: %s\n", source);
	
	int i;
	while ((i = fgetc(file)) != EOF){
	    putchar(i);
	}
	fclose(file);
    }

