// Mayor de tres enteros

#include <stdio.h>

int main() {
    int a, b, c, mayor;

    printf("Ingrese el primer numero: ");
    scanf("%d", &a);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &b);

    printf("Ingrese el tercer numero: ");
    scanf("%d", &c);

    mayor = a;

    if (b > mayor) {
        mayor = b;
    }
    if (c > mayor) {
        mayor = c;
    }

    printf("El mayor de los tres numeros es: %d\n", mayor);

    return 0;
}
