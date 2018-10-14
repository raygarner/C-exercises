
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int c;
    

    while ((c = getchar()) != EOF) {
        
        if (c == ' ') {
            putchar(' ');
            while ((c = getchar()) == ' ');
            putchar(c);
        } else if (c == '\t'){
            putchar('\\\t');
        } else if (c == '\b'){
            putchar('\\\b');
        } else if (c == '\\'){
            putchar('\\');
            putchar('\\');
        }else{
            putchar(c);
        }
    
        

    }
}
