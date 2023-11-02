#include <stdio.h>
#include <stdlib.h>

int my_div(int dividend, int divisor, double *quotient)
{
    // TODO:
    // Funkce do quotient uloží reálné číslo podílu divident a divisor.
    // Vrací 0 při dělení nulou, jinak nenulové číslo.
}
int main() {
    int dividend, divisor;
    double quotient;
    scanf("%d %d", &dividend, &divisor);
    if (!my_div(dividend, divisor, &quotient))
    {
        printf("Division by zero!\n");
        return 1;
    }
    printf("%d / %d = %f\n", dividend, divisor, quotient);
    return 0;
}