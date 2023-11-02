#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 0;
    int b = 42;
    int *p;
    p = &b;
    p = &a;
    (*p) ++;
    *p ++;
    p = NULL;
    return *p;
}