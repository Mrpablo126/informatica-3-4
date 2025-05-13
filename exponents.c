#include <stdio.h>
#include <math.h>

int main ()
{
int base, exp;
long double result = 1.0;

printf("Enter the number base:");
scanf(" %d", &base);

printf("Enter the exponent number:");
scanf(" %d", &exp);

while (exp != 0) {
    result *=base;
    --exp;
}

printf("Result: %0.Lf\n", result );

pow(exp, base);

printf("Result using pow: %0.Lf\n", result);






    return 0;
}