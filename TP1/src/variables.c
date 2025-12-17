#include <stdio.h>

int main(void)
{
    /* char */
    char c = 'A';
    signed char sc = -10;
    unsigned char uc = 200;

    /* short */
    short int s = -32000;
    unsigned short int us = 65000;

    /* int */
    int i = -123456;
    unsigned int ui = 123456;

    /* long int */
    long int li = -1000000L;
    unsigned long int uli = 1000000UL;

    /* long long int */
    long long int lli = -9000000000LL;
    unsigned long long int ulli = 9000000000ULL;

    /* types flottants */
    float f = 3.14f;
    double d = 3.1415926535;
    long double ld = 3.141592653589793L;

    /* affichage */
    printf("char                : %c\n", c);
    printf("signed char         : %d\n", sc);
    printf("unsigned char       : %u\n\n", uc);

    printf("short int           : %d\n", s);
    printf("unsigned short int  : %u\n\n", us);

    printf("int                 : %d\n", i);
    printf("unsigned int        : %u\n\n", ui);

    printf("long int            : %ld\n", li);
    printf("unsigned long int   : %lu\n\n", uli);

    printf("long long int       : %lld\n", lli);
    printf("unsigned long long  : %llu\n\n", ulli);

    printf("float               : %.2f\n", f);
    printf("double              : %.10f\n", d);
    printf("long double         : %.15Lf\n", ld);

    return 0;
}
