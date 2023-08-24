#include <stdio.h>
#include <stdlib.h>

int* eliminarDuplicados(const int *array, int longitud, int *nuevaLongitud) {
    int *resultado = (int*)malloc(longitud * sizeof(int));
    if (resultado == NULL) {
        printf("Error al asignar memoria.");
        exit(1);
    }

    int index_resultado = 0;

    for (int i = 0; i < longitud; i++) {
        int duplicado = 0;
        
        // Comprobar si el número ya está en el resultado
        for (int j = 0; j < index_resultado; j++) {
            if (array[i] == resultado[j]) {
                duplicado = 1;
                break;
            }
        }

        if (!duplicado) {
            resultado[index_resultado++] = array[i];
        }
    }

    *nuevaLongitud = index_resultado;

    return resultado;
}

int main() {
    int longitud;
    
    printf("Ingrese la longitud de la matriz: ");
    scanf("%d", &longitud);
    
    int *array = (int*)malloc(longitud * sizeof(int));
    
    printf("Ingrese los elementos de la matriz:\n");
    for (int i = 0; i < longitud; i++) {
        scanf("%d", &array[i]);
    }

    int nuevaLongitud;
    int *resultado = eliminarDuplicados(array, longitud, &nuevaLongitud);

    printf("Matriz original: ");
    for (int i = 0; i < longitud; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    printf("Matriz sin duplicados: ");
    for (int i = 0; i < nuevaLongitud; i++) {
        printf("%d ", resultado[i]);
    }
    printf("\n");

    free(array);
    free(resultado);

    return 0;
}
