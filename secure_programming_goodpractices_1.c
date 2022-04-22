/*
 * if_statement.c
 *
 * Secure programming and keywords
 * Author : Rodrigo Noriega 
 * 
 */ 

/*
We would follow certain guidelines that will help you avoid programming practices that open
systems to attacks.
One such guideline is to avoid using printf with a single string argument. If you need to display
a string that terminates with a newline, use the puts function, which displays its string
argument followed by a newline character. For example, 
*/

#include <stdio.h>

int main (void){

    printf("Welcome to C!\n");

    //should be

    puts("Welcome to C!");

/*
We did not include \n in the preceding string because puts adds it automatically.
If you need to display a string without a terminating newline character, use printf
with two arguments—a "%s" format control string and the string to display. The %s conversion
specifier is for displaying a string. For example,
*/

    printf("Welcome to C! ");

//should be

    printf("%s", "Welcome to C!");

//keywords

puts("\nKeywords of C");
    char cKeys[32][8] = {
                            "auto","double","int", "struct",
                            "break", "else", "long", "switch",
                            "case", "enum", "register", "typedef",
                            "char", "extern", "return", "union",
                            "const", "float", "short", "unsigned",
                            "continue", "for", "signed", "void",
                            "default", "goto", "sizeof", "volatile",
                            "do", "if", "static", "while"
};

int n;

for(n = 0; n < 33; n++){
    printf("%s\n", cKeys[n]);
    }

//keywords added in C99 standard
puts("Keywords added in C99 Standard");
    char c99std[5][10] = {

                        "_Bool", "_Complex", "_Imaginary",
                        "inline", "restrict" 

    };//end array C99 standard

for(n = 0; n < 5; n++){
    printf("%s\n", c99std[n]);
}

//keywords added in C11 draft standard

puts("\nKeywords added in C11 draft Standard");
    char c11std[8][15] = {

                        "_Alignas", "_Alignof", "_Atomic",
                        "_Generic", "_Noreturn", "_Static_assert",
                        "_Thread_local" 

    };//end array C11 draft standard

for(n = 0; n < 8; n++){
    printf("%s\n", c11std[n]);
}

    return 0;

}//end main