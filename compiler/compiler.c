/*
 * CFP Programming Language
 *
 * Copyright (c) 2026 Vyzag Ajith
 *
 * Licensed under either of:
 *   - Apache License, Version 2.0
 *   - MIT License
 *
 * You may choose which license applies.
 */

#include <stdio.h>
#include <stdlib.h>
#include "lexer.h"
#include <string.h>


int main(int argc,char *argv[]) 
{
    if (argc<2){
	fprintf(stderr,"ERROR: Do %s <file_name> |or --help to know how to use cfp\n", argv[0]);
	return(1);
    }
    else if (strcmp(argv[1], "--help") == 0) {
        printf("\tcfp - C For Physics\n");
	printf("Syntax - cfp [filename.cfp]");
        printf("\nOptions:\n");
        printf("  --help       Show this help message\n");
        printf("  --version    Show compiler version\n");
        return 0;
    }
    if(strcmp(argv[1], "--version") == 0){
	fprintf(stdout, "0.0.0 - In Development\n");
	return(0);
    }
    //to check if the filename ends with .cfp
    char *ext = strrchr(argv[1], '.'); 
    
    if (!ext || strcmp(ext , ".cfp") != 0){
	fprintf(stderr, "ERROR: %s Wrong file type. File extension must be '.cfp'\nDo --help to learn the commands\n", argv[1]);
    }
    
    else{ 
	TOKENIZE(argv[1]);
    }
}

