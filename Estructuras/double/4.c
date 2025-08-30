// 4. Escribe un programa que determine si un número double es positivo, negativo o cero.

# include <stdio.h>

int main() {

    double num;
    printf("Ingrese un número: ");
    scanf("%lf", &num);

    if (num > 0)
        printf("El numero es positivo. \n");
    else if (num < 0)
        printf("El numero es negativo. \n");
    else 
        printf("El numero es cero. \n");

    return 0;
}