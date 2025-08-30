// 1. Escribe un programa que lea un carácter y muestre su código ASCII.

#include <stdio.h>

int main() {
    char c;
    printf("ingresa un carácter: ");
    scanf("%c", &c);
    printf("El código ASCCI de '%c' es %d\n", c, c);
    return 0;
}
