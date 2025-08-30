// factorial de un entero positivo

#include <stdio.h>

int main() {
    int n, i;
    int factorial = 1;

    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("No existe factorial de numeros negativos.\n");
    } else {
        for (i = 1; i <= n; i++) {
            factorial *= i;
        }
        printf("El factorial de %d es: %d\n", n, factorial);
    }

    return 0;
}
