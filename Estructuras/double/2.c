// 2. Crea un programa que sume dos números de punto flotante de doble precisión.

#include <stdio.h>

int main () {

    double a, b, suma;
    printf("Ingrese dos números: ");
    scanf("%lf %lf", &a, &b);

    suma = a + b;
    printf("La suma es: %.2lf\n", suma);

    return 0;

}