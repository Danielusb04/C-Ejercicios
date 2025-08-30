# include <stdio.h>
# include <ctype.h>

int main () {
    char c;
    printf("Ingrese una letra minúscula: ");
    scanf("%c", &c);

    //convertir la leta a mayúscula si es minúscula

    c = toupper(c);

    printf("La letra mayúscula es: %c\n", c);
    return 0;
 }