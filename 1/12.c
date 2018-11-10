#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

//write a program that prints its input one word per line

int main()
{
    int c;
    bool loop = true;

    while ((c = getchar()) != EOF) {
        if (isalpha(c)) {
            putchar(c);

        }else{
            while (!(isalpha((c = getchar()))));

            
            putchar('\n');
            putchar(c);
        }
    }

   
}