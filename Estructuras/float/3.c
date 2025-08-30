#include <stdio.h>

int main() {
    float num1, num2, num3, promedio;

    printf("Ingrese tres numeros reales: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    promedio = (num1 + num2 + num3) / 3;

    printf("El promedio es: %.2f\n", promedio);
    return 0;
}
