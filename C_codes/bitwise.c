#include <stdio.h>

int main(){
    // binary representation

    unsigned char a = 5, b = 3;

    printf("a & b = %d\n", a & b);
    printf("a | b = %d\n", a | b);
    printf("a ^ b = %d\n", a ^ b);
    printf("~a = %d and ~b = %d\n", (unsigned char)~a, (unsigned char)~b);

    printf("a << 1 = %d\n", a << 1);
    printf("b >> 1 = %d\n", b >> 1);

    return 0;
}