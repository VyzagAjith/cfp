#include <stdio.h>
#include <stdlib.h>
#include "lexer.h"
#include <string.h>


int main(int argc,char *argv[]) 
{
    if (argc<2){
	fprintf(stderr,"ERROR: Do %s <file_name>\n", argv[0]);
	return(1);
    }
    
    //to check if the filename ends with .cfp
    char *ext = strrchr(argv[1], '.'); 
    
    if (!ext || strcmp(ext , ".cfp") != 0){
	     fprintf(stderr, "ERROR: %s Wrong file type. File extension must be '.cfp'\n", argv[1]);
    }

    else{ 
	TOKENIZE(argv[1]);
    }
}
