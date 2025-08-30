#include <stdio.h>

int main() {
    float num1, num2;

    printf("Ingrese dos numeros decimales: ");
    scanf("%f %f", &num1, &num2);

    if (num1 > num2) {
        printf("%.2f es mayor que %.2f\n", num1, num2);
    } else if (num2 > num1) {
        printf("%.2f es mayor que %.2f\n", num2, num1);
    } else {
        printf("Ambos numeros son iguales.\n");
    }
    return 0;
}
