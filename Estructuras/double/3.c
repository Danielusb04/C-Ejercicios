// 3. Realiza un programa que calcule el promedio de 5 números ingresados por el usuario.

#include <stdio.h>

int main () {
    double num, suma = 0.0, promedio;
    int i;

    printf("Ingrese 5 numeros:\n");
    for (i = 0; i < 5; i++) {
        scanf("%lf", &num);
        suma += num;
    }

    promedio = suma / 5.0;
    printf("El promedio es: %.2lf\n", promedio);

    return 0;
}