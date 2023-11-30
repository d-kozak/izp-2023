/**
 * Kostra programu pro vypocet Fibonacciho cisel
 * 2020, Ales Smrcka
 */
#include <stdio.h>
#include <stdlib.h>

typedef unsigned long long int ull;

/**
 * Fib(n) = 
 *  0                   n=0
 *  1                   n=1
 *  Fib(n-1)+Fib(n-2)   n>1
 *
 * 1. Naprogramujte funkci rekurzivne.
 * 2. Zjistete, kolikrat byla funkce volana.
 * 3. Akcelerujte vypocet pomoci statickeho nebo globalniho pole vysledku.
 */
ull fib(ull n)
{
    ull result;
    // TODO
    return result;
}

int main(int argc, char **argv)
{
    ull n;
    if (argc < 2)
        return 1;
    n = strtoul(argv[1], NULL, 10);

    printf("fib(%llu) = %llu\n", n, fib(n));
    //printf("nf = %llu\n", nf);
    return 0;
}