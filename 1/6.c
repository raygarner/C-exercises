//verify that the expression getchar() != EOF is 0 or 1 and printf the value of EOF

#include <stdio.h>

int main()
{
    printf("%d\n", getchar() != EOF);
    printf("%d\n", EOF);
    
}