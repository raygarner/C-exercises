//write a program to print a histogram of the lengths of the words in its input

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{

	char c; 

	int b[10];
	int i = 0;

	for (int j = 0; j < 10; j++) {
		b[j] = 0;

	}

	
	while ((c = getchar()) != EOF){

		if (isalpha(c)) {
			i++;
		}else{ //if c is not a character
			b[i]++;	
			
			i = 0;
		}	
	}
	//printf("\n1 to 3: %d\n4 to 6: %d\n7 to 9: %d\ngreater than 9: %d\n", b1, b2, b3, greater);

	for (int n = 0; n < 10; n++) {
		printf("length of %d = %d\n", n, b[n]);

	}

}
