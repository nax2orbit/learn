#include <stdio.h>

main(){
    printf("hello, world\n\x"); // error: \x used with no following hex digits
}
