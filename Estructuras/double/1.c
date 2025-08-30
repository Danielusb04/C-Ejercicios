// 1. Escribe un programa que calcule el valor de pi usando la serie de Leibniz con 1000 términos

#include <stdio.h>

int main() {
    int n;
    double pi = 0.0;

    for (n = 0; n < 1000; n++) {
        if (n % 2 == 0)
            pi += 1.0 / (2.0 * n + 1.0);
        else
            pi -=1.0 / (2.0 * n + 1.0);
    }

    pi *= 4.0;

    printf("Valor aproximado de PI con 1000 terminos: %.10f\n, pi");

    return 0;
}

