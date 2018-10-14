//write a program to copy its input to its output but replace blocks of spaces with a single space
//write a program to copy its input with its output but replace tabs with \t, backspaces with \b and backslashes with two backslashes

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int c;
    

    while ((c = getchar()) != EOF) {
        
    
        
        switch (c){
        case ' ':
            putchar(' ');
            while ((c = getchar()) == ' ');
            putchar(c);
            break;
        
        case '\t':
            putchar('\\\t');
            break;
        
        case '\b':
            putchar('\\\b');
            break;
        
        case '\\':
            putchar('\\');
            putchar('\\');
            break;

        default: 
            putchar(c);
            //break;
        

        }


    }
}
