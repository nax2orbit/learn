#include <stdio.h>

main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;   /* ondohyou no kagen */
    upper = 300; /* jougen */
    step = 20;   /* kizami */

    fahr = lower;
    printf ("fahr celsius\n");
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
	printf ("%3.0f %6.1f\n", fahr, celsius);
	fahr = fahr + step;
    }
}
