// 5. Haz un programa que verifique si un carácter ingresado es un dígito numérico.

#include <stdio.h>
#include <ctype.h> // Para usar la función isdigit()

int main (void) {
    char c;
    printf("Ingresa un carácter: ");
    scanf(" %c", &c);

    if (isdigit(c)) {
        printf("El caracter '%c' es un digito numerico. \n", c);
    } else {
        printf("El caracter '%c' NO es un digito númerico. \n", c);
    }
        
    return 0;
}