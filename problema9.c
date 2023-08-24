#include <stdio.h>

/*
programa que muestra los primeros N términos 
de la serie de Fibonacci.
*/

int main(int series, char** fibonacci) {
    int n, cont, a = 0, b = 1, c;   //Tipos de variables que se usan
    printf("Cuantos numeros quieres crear: ");
    scanf("%d", &n);
    printf("0,1,");

    for(cont=0; cont<n-2; cont++) {
        c = a + b;  //Formula
        printf("%d",c);
        a = b;
        b = c; 
    }
    printf("\n");
    return 0;
}