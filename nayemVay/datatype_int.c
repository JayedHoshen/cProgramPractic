#include <stdio.h>

int main() {
    // Signed Integer Data
    printf("Signed Integer\n");
    // Short- %d %hi
    short a = 45;
    printf("I am short - %hi\n", a);

    // Int - %d %i
    int b = 1000;
    printf("I am integer - %d\n", b);

    // long - %ld %li
    long c = 1200L;
    printf("I am long - %ld\n", c);

    // long long - %lld %lli
    long long d = 34343LL;
    printf("I am long long - %lld\n", d);

    // Octal int - %o
    int o = 0777;
    printf("I am octal - %o\n", o);
    printf("I am decimal of octal - %d\n", o);

    // Hexadecimal int - %x %X
    int h = 0xfff;
    printf("I am hexadecimal - %X\n", h);
    printf("I am decimal of Hexadecimal - %d\n", h);

    //Unsigned Integers
    printf("Unsigned Integers\n");

    // Unsigned short - %hu
    unsigned short us = 41;
    printf("Unsigned short - %hu\n", us);

    // unsigned int - %u
    unsigned int ui = 4454;
    printf("Unsigned int - %u\n", ui);

    // unsigned long - %lu
    unsigned long ul = 445454;
    printf("Unsigned long - %lu\n", ul);

    // unsigned long long - %llu
    unsigned long long ull = 4454544444;
    printf("Unsigned long long - %llu\n", ull);    
    
    // Negative unsigned
    unsigned short negative = -2;
    printf("Negative Unsigned - %hu\n", negative);

    return 0;
}