#include <stdio.h>

/*
Genera la Tablas de multiplicar de un numero dado
*/ 

int main (){
    int op;    int num, cont = 0;
    do{
        printf("--- Tablas de Multiplicar ---\n");
        printf("\n Que desea realizar\n");
        printf("1) Tablas\n");
        printf("2) Salir\n");
        scanf("%d",&op);
        switch(op){
            case 1:
            printf("\a ----- Tabla de Multiplicar ----- \n");
            printf("Ingrese un numero: \n");
            scanf("%d", &num);
            printf("La tabla de multiplicar de %d es:\n", num);
            while (++cont <= 10)
                printf("%d * %d = %d\n", num, cont, (num * cont));
            break;
            case 2:
            printf("\tSalir\n");
            break;
            default:
            printf("\topcion invalida. s\n");
        }
    } while(op != 2);
return 0;    
}