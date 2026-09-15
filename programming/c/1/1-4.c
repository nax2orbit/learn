#include <stdio.h>

main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;   /* ondohyou no kagen */
    upper = 300; /* jougen */
    step = 20;   /* kizami */

    celsius = lower;
    printf ("celsius fahr\n");
    while (celsius <= upper) {
	fahr = (9.0/5.0)* celsius + 32;
	printf ("%6.0f %3.0f\n", celsius, fahr);
	celsius = celsius + step;
    }
}


