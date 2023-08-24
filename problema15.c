#include <stdio.h>
#include <string.h>

#define ALFABETO_LEN 26

void encriptarCesar(char mensaje[], int desplazamiento) {
    int longitud = strlen(mensaje);

    for (int i = 0; i < longitud; i++) {
        if (mensaje[i] >= 'A' && mensaje[i] <= 'Z') {
            mensaje[i] = 'A' + (mensaje[i] - 'A' + desplazamiento) % ALFABETO_LEN;
        }
    }
}

int main() {
    char mensaje[100];
    int desplazamiento;

    printf("Ingrese un mensaje en mayusculas (sin espacios ni caracteres especiales): ");
    scanf("%s", mensaje);

    printf("Ingrese el numero fijo de desplazamiento: ");
    scanf("%d", &desplazamiento);

    encriptarCesar(mensaje, desplazamiento);

    printf("Mensaje encriptado: %s\n", mensaje);

    return 0;
}
