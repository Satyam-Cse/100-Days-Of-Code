#include <stdio.h>

enum Result {
    a = 10,
    b = 20,
    c = 30
};

int main() {

    printf( "  a  = %d\n", a);
    printf( "  b  = %d\n", b);
    printf( " c  = %d\n", c);

    return 0;
}