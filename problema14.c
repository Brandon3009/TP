#include <stdio.h>

int main() {
    int filas;

    printf("Ingrese el numero de filas: ");
    scanf("%d", &filas);

    for (int i = 1; i <= filas; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
