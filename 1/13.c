//write a program to print a histogram of the lengths of the words in its input

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
	int b1, b2, b3, greater, i; //1to3 4to6 7to9 greater

	int c; 

	b1 = b2 = b3 = greater = i = 0;
	
	while ((c = getchar()) != EOF){

		if (isalpha(c)) {
			i++;
		}else{
			if (1 >= i <= 3) {
				//1to3++;
				b1++;
			}else if (4 >= i <= 6) {
				//4to6++;
				b2++;
			}else if (7 >= i <= 9) {
				//7to9++;
				b3++;
			}else if (i > 9) { //else if used to prevent 0 length words being caught here
				greater++;
			}
			
			i = 0;
		}	
	}
	printf("\n1 to 3: %d\n4 to 6: %d\n7 to 9: %d\ngreater than 9: %d\n", b1, b2, b3, greater);
}
