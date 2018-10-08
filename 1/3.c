//modify temp conversion program to add a heading and convert celsius to farenheit and print it in reverse order

#include <stdio.h>

int main()
{
    float fahr, celsius;

    int lower, upper, step;

    lower = 0; //lower limit of temp table
    upper = 300; //upper limit of temp table
    step = 20; //step size

    /*
    fahr = lower;

    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
    */

   celsius = upper;
   printf("cel   fahr\n");

   while (celsius >= lower) {
       fahr = (celsius / (5.0/9.0)) + 32.0;
        
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius = celsius - step;

   }
}