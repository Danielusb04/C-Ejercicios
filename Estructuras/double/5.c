// 5. Calcular la potencia de un número (base y exponente double)

#include <stdio.h>
#include <math.h>

int main() {
    double base, exponente, resultado;

    printf("Ingrese la base y el exponente: ");
    scanf("%lf %lf", &base, &exponente);

    resultado = pow(base, exponente);
    printf("%.2lf ^ %.2lf = %.5lf\n", base, exponente, resultado);

    return 0;
}