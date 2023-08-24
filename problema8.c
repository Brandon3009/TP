#include <stdio.h>
#include <string.h>

void duplicarCaracteres(const char *cadena, char *resultado) {
    int longitud = strlen(cadena);
    int index_resultado = 0;

    for (int i = 0; i < longitud; i++) {
        resultado[index_resultado++] = cadena[i];
        resultado[index_resultado++] = cadena[i];
    }

    resultado[index_resultado] = '\0';  
}

int main() {
    char cadena[100];  
    char resultado[200];  

    printf("Ingrese una cadena: ");
    scanf("%s", cadena);

    duplicarCaracteres(cadena, resultado);

    printf("Cadena duplicada: %s\n", resultado);

    return 0;
}
