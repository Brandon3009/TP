#include <stdio.h>

/* 
Calculadora basica para sumar y multiplicar
*/
int main() {
    int op, uno, dos;
    do{
        printf("--- calculadora ---\n");
        printf("\n Que desea realizar\n");
        printf("1) suma\n");
        printf("2) multiplicacion\n");
        printf("3) salir\n");
        scanf("%d",&op);
        switch(op){
            case 1:
            printf("\tSumar\n");
            printf("introduzca los numeros a sumar separados por comas\n");
            scanf("%d, %d",&uno, &dos);
            printf("%d + %d = %d\n", uno, dos, (uno + dos ));
            break;
            case 2:
            printf("\tMultiplicar\n");
            printf("introduzca los numeros a multiplicar separados por comas\n");
            scanf("%d, %d", &uno, &dos);
            printf("%d * %d = %d\n", uno, dos, (uno * dos));
            break;
            case 3:
            printf("\tSalir\n");
            break;
            default:
            printf("\topcion invalida. s\n");
        }
    } while (op != 3);
return 0;
}