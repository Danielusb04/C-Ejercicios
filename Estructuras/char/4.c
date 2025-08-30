#include <stdio.h>
#include <string.h>

int main() {
    char palabra[100], letra;
    int contador = 0;

    printf("Ingrese una palabra: ");
    scanf("%s", palabra); //lee la palabra
    getchar(); // limpia es buff de entranda

    printf("Ingrese la palabra a contar: ");
    scanf("%s", &letra); // lee la letra

// lee la pallabra y cuenta cuantas veces aparece la letra

    for (int i = 0; i < strlen(palabra); i++) {
        if (palabra[i] == letra) {
            contador++;
        }
    }

    printf("La letra '%c' aparece %d veces en la palabra '%s'. \n", letra, contador, palabra);
    return 0;
}

