#include <stdio.h>

main() {
    int c;

    while ((c = getchar()) != EOF) {
	    printf("result:%d\n", getchar() != EOF); // tuneni 1
	    //putchar(c);
    }
}
