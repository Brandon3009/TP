#include <stdio.h>

/*
Este programa solicita un numero inicial y un numero final
para buscar los pares entre dicho rango 
*/

int main() {
    int pares;
    int i,f;

    printf("Introduzca el valor de numero inicial: ");
    scanf("%d",&i);

    printf("Ingrese el valor del numero final: ");
    scanf("%d",&f);

    printf("Los numeros pares en el rango indicado son:\n");
    for(pares =i; pares <=f; pares++) {
        if(pares % 2 ==0) {
            printf("%d", pares);
        }
    }
 return 0;
}
