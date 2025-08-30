// 2. Crea un programa que determine si un carácter es una vocal o consonante.

#include <stdio.h>
#include <ctype.h>

int main() {
    char c;
    printf("ingrese un carácter: ");
    scanf("%c", &c);
    c = tolower(c); // conversion a minúscula

    if (c == 'a' || c == 'e' || c == 'i' || c =='o' || c == 'u') {
        printf("El caracter '%c' es una vocal. \n", c);
    } else if ((c >= 'a' && c <= 'z')) {
        printf("El carácter '%c' es una consonante. \n", c);
    } else {
        printf("No es una letra.\n");
    }

    return 0;

}