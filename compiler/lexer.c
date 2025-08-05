#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

//Keywords 
typedef enum {
    TOK_NUM,
    TOK_CHAR,
    TOK_STRING,
    TOK_FLOAT,
    TOK_DOUBLE,
    TOK_FOR,
    TOK_WHILE,
    TOK_IF,
    TOK_ELSE,
    TOK_ELSEIF,
    TOK_FUNC,
    TOK_VOID,
    TOK_GLOBAL,
    TOK_WINDOW,
    TOK_MAIN,
    TOK_RETURN,
    TOK_TYPEDEF,
}KEYWORD_TOKS;

//Identifiers
typedef enum {
    TOK_VARIABLE,
    TOK_ENUM_VARIABLE,
}IDENTIFIER_TOKS;

//Constants
typedef enum {
    TOK_CONST,
    TOK_DEFINE,
}CONSTANT_TOKS;

//Operators
typedef enum {
    TOK_ADD,
    TOK_SUBTRACT,
    TOK_MULTIPLY,
    TOK_DIVIDE,
    TOK_MOD,
    TOK_EXPONENT,
    TOK_POWER_OF_10,
    TOK_POWER_OF_e,
    TOK_NATURAL_LOG,
    TOK_LOG,
    TOK_SINE,
    TOK_COSINE,
    TOK_TAN,
    TOK_SEC,
    TOK_COSEC,
    TOK_COT,
    //TOK_SINE_INVERSE,
    //TOK_COS_INVERSE,
    //TOK_TAN_INVERSE,
    //TOK_SEC_INVERSE,
    //TOK_COSEC_INVERSE,
    //TOK_COT_INVERSE,
    TOK_MATRIX_ADDITION,
    TOK_MATRIX_SUBTRACTION,
    TOK_MATRIX_MULTIPLICATION,
    TOK_MATRIX_DIVISION,
    TOK_EIGEN_VALUES,
    TOK_EIGEN_VECTORS,
    TOK_NORMALIZE,
    TOK_DIFFERENTIATE,
    TOK_INTEGRATE,
    TOK_SOLVE_QUADRATIC,
    TOK_SOLVE_CUBIC,
    TOK_SOLVE, //solves equation of any degree mentioned
    TOK_SOLVE_DIFFERENTIAL,
    TOK_SOLVE_INTEGRAL,
}OPERATOR_TOKS;

typedef enum {
    TOK_LBRACKET,
    TOK_RBRACKET,
    TOK_COMMA,
    TOK_OPEN_PARANTHESIS,
    TOK_CLOSED_PARANTHESIS,
    TOK_LBRACES,
    TOK_RBRACES,
    TOK_SEMICOLON,
    TOK_COLON,
}SYMBOLS_TOKS;

int main()
{
    printf("Compiled and running well\n");

}
