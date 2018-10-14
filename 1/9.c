
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int c;
    

    while ((c = getchar()) != EOF) {
        
        if (c == ' ') {
            while ((c = getchar()) == ' ');
            putchar(' ');
        }
    
        putchar(c);

    }
}
