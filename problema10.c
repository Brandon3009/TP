#include <stdio.h>
#include <math.h>

/*
Este programa calcula el volumen de un cubo, una esfera, una piramide
de base triangular y base cuadrada.
*/


float calcularVolumenCubo(float lado) {
    return lado * lado * lado;
}

float calcularVolumenEsfera(float radio) {
    return 4.0 / 3.0 * M_PI * pow(radio, 3);
}

float calcularVolumenPiramideTriangular(float base, float altura) {
    return 1.0 / 3.0 * base * base * altura;
}

float calcularVolumenPiramideCuadrada(float base, float altura) {
    return 1.0 / 3.0 * base * base * altura;
}

int main() {
    int opcion;
    float lado, radio, base, altura;
    while(1) {
        printf("---Calculo de volumen---\n");
        printf("1) Volumen de un cubo\n");
        printf("2) Volumen de una esfera\n");
        printf("3) Volumen de una piramide de base triangular\n");
        printf("4) Volumen de una piramide de base cuadrada\n");
        printf("5) Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
            printf("Ingrese la longitud del lado del cubo: ");
            scanf("%f", &lado);
            printf("El volumen del cubo es: %f\n", calcularVolumenCubo(lado));
            break;
            case 2:
            printf("Ingrese el radio de la esfera: ");
            scanf("%f", &radio);
            printf("El volumen de la esfera es: %f\n", calcularVolumenEsfera(radio));
            break;
            case 3:
            printf("Ingrese la longitud de la base de la piramide triangular: ");
            scanf("%f", &base);
            printf("Ingrese la altura de la piramide triangular: ");
            scanf("%f", &altura);
            printf("El volumen de la piramide triangular es: %f\n", calcularVolumenPiramideTriangular(base, altura));
            break;
            case 4:
            printf("Ingrese la longitud de la base de la piramide cuadrada: ");
            scanf("%f", &base);
            printf("Ingrese la altura de la piramide cuadrada: ");
            scanf("%f", &altura);
            printf("El volumen de la piramide cuadrada es: %f\n", calcularVolumenPiramideCuadrada(base, altura));
            break;
            case 5:
            printf("Salir\n");
            return 0;
            default:
            printf("Opción no valida. Por favor, seleccione una opción valida.\n");
        }
    }
}
