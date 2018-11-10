//write a program to count blanks, newlines and tabs
#include <stdio.h>

int main()
{
    int c, nl, t, b;

    nl = 0;
    t = 0;
    b = 0;

    while ((c = getchar()) != EOF){
        switch (c){
        case '\n':
            nl++;
            break;
        
        case '\t':
            t++;
            break;
        
        case ' ':
            b++;
            break;


        }
    }

    printf("\nblanks: %d\ntabs: %d\nline breaks: %d\n", b, t, nl);

}
