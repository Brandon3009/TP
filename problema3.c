#include <stdio.h>
/*
Este programa cuenta y muestra la cantidad de caracteres en 
una cadena de textos.
*/
int main() {
  char cadena[30];
  int contador = 0;
  printf("Escribe una palabra o un texto menos de 30 caracteres:");
  fgets(cadena, 30, stdin);
  while (cadena[++contador] != 0);
  printf("La longitud de:%s, es: %d", cadena, contador);
  
  return 0;
}