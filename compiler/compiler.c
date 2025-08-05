#include <stdio.h>
#include <stdlib.h>
#include "lexer.h"
    
int main(int argc,char *argv[]) 
{
    if (argc<2){
	fprintf(stderr,"ERROR: Do %s <file_name>\n", argv[0]);
	return(1);
    }
    
TOKENIZE(argv[1]);

}

