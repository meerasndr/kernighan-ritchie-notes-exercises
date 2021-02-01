#include <ctype.h>
#include <stdio.h>

/*int getch(void); */
/* void ungetch(int); */

/* getint: get next integer from input into *pn */

int getint(int *pn){
    int c, sign;
    while (isspace(c = getch())) /* skip white space */
    ;

    if (!isdigit(c) && c != EOF && c != '+' && c != '-'){
        ungetch(c);
        return 0;
    }
    
}