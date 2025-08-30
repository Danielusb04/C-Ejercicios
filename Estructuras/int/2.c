// Número par o impar:

#include <stdio.h>

int main() {
    int n;

    printf("Ingrese un numero entero: ");
    scanf("%d", &n);

    if (n % 2 == 0)
        printf("%d es PAR\n", n);
    else
        printf("%d es IMPAR\n", n);

    return 0;
}
