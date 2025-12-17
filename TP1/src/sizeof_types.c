
#include <stdio.h>
#include <string.h>

int main(void)
{
    printf("Taille des types de base en octets :\n\n");

    /* char */
    printf("char               : %zu octets\n", sizeof(char));
    printf("signed char        : %zu octets\n", sizeof(signed char));
    printf("unsigned char      : %zu octets\n\n", sizeof(unsigned char));

    /* short */
    printf("short int          : %zu octets\n", sizeof(short int));
    printf("unsigned short int : %zu octets\n\n", sizeof(unsigned short int));

    /* int */
    printf("int                : %zu octets\n", sizeof(int));
    printf("unsigned int       : %zu octets\n\n", sizeof(unsigned int));

    /* long int */
    printf("long int           : %zu octets\n", sizeof(long int));
    printf("unsigned long int  : %zu octets\n\n", sizeof(unsigned long int));

    /* long long int */
    printf("long long int          : %zu octets\n", sizeof(long long int));
    printf("unsigned long long int : %zu octets\n\n", sizeof(unsigned long long int));

    /* types flottants (pas de signed/unsigned) */
    printf("float              : %zu octets\n", sizeof(float));
    printf("double             : %zu octets\n", sizeof(double));
    printf("long double        : %zu octets\n", sizeof(long double));

    return 0;
}

