#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "lexer.h"
void TOKENIZE(const char *source)
    {
	FILE *file = fopen(source, "r");
	
	if (!file){
	    perror("");
	    exit(1);
	}
	else if (file == NULL){
	    printf("Nothing in %s to be read", source);
	    exit(2);
	}
	else 
	    printf("Reading the file: %s\n", source);
	
    }


