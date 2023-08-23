#include <stdio.h>
/*
Este programa calcula el factoria de un numero 
ingresado por el usuario
*/

int main () {
    int a, b, fac =1;

    printf("Escribe un numero para calcular el factorial: ");
    scanf("%d", &a);

    for(b = a; b > 1; b--) {
        fac = fac * b;
    }
    printf(" El factorial de %d = %d\n", a, fac);
    getchar();
 return 0;
}