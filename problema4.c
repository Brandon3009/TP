#include <stdio.h>

/*
Este programa determina el seno de un angulo a partir
de la serie de Tylor
*/



//Funcion para obtener la potencia

float potencia(float n, float pot){
    float p= 1;
    int i = 1;
    for(i = 1; i <= pot; ++i){
        p *= n;
    }
    return (p);
}

//Funcion para obtener el factorial

float factorial(float n) {
    int c;
    float f = 1;
    for (c = 1; c <= n; ++c) {
        f *= c;
    }
    return (f);
}

//funcion para el seno

float seno(int elementos, float num1) {
    float Sen = 0;
    num1 *= 0.01745;   //conversor a radianes
    int i = 0;
    for(i = 0; i <= elementos; ++i) { //ciclo flor
        float a = potencia(-1, i);
        float numB = (2*i) + 1;
        float b = factorial(numB);
        float c = potencia(num1, numB);
        Sen = Sen + ((a/b)*c);
    }
    return (Sen);
}

int main() {
    int elementos;
    float num1, Sen;
    int n= 1, gr;
    while(1) {
        printf("\t\tSerie de Tylor\n");
        printf("Numeros de elementos en la serie: ");
        scanf("%d", &elementos);
        
        printf("Que tienes Grados(1) o Radianes(2): ");
        scanf("%d", &gr);

        if(gr == 1) {
            printf("Escriba el valor de los grados: ");
            scanf("%d", &n);
            num1 = n;
            Sen = seno(elementos, num1);

            printf("Seno = %f\n", Sen);
        } else if(gr == 2) {
            printf("Escribe el valor de los Radianes: ");
            scanf("%d", &n);
            num1 = n * (180.00/3.1416); //de radianes a grados
            Sen =seno(elementos, num1);

            printf("Seno = %f\n", Sen);
        }
    }
return 0;
}
