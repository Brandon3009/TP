#include <stdio.h>

int main(){
    char opcion;
    float temperatura;

    while(1) {
        printf("Seleccione el tipo de conversion\n");
        printf("1) Celsius a Fahrenheit\n");
        printf("2) Fahrenheit a Celsius\n");
        printf("3) Salir\n");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1:
            printf("Ingrese la temperatura en grados Celsius:\n");
            scanf("%f", &temperatura);
            float fahrenheit = (temperatura *9/5)+32;
            printf("%.1f grados celsius son %.1f grados Fahrenheit\n", temperatura,fahrenheit);
            break;

            case 2:
            printf("Ingrese la temperatura en grados Fahrenheit:\n");
            scanf("%f", &temperatura);
            float celsius = (temperatura - 32) * 5/9;
            printf("%.1f grados Fahrenheit son %.1f grados Celsius.\n", temperatura, celsius);
            break;
            case 3:
            printf("Salir\n");
            return 0;
         default:
         printf("opcion no valida verificar sus datos\n");   
        }
    }
}