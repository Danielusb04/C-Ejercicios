// Suma de dos enteros
#include <stdio.h>

int main() {
    int a, b, suma;

    printf("Ingrese el primer numero entero: ");
    scanf("%d", &a);

    printf("Ingrese el segundo numero entero: ");
    scanf("%d", &b);

    suma = a + b;

    printf("La suma de %d y %d es: %d\n", a, b, suma);

    return 0;
}

