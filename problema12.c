#include <stdio.h>

float conversionMillasAGalonImperial(float millasPorGalon) {
    float galonPorLitro = 4.54609188;  // 1 galon imperial = 4.54609188 litros
    float millaAKilometro = 1.609344;   // 1 milla = 1.609344 kilómetros

    float kilometrosPorLitro = millasPorGalon * millaAKilometro / galonPorLitro;
    return kilometrosPorLitro;
}

int main() {
    float millasPorGalon;

    printf("Ingrese la cantidad de millas por galon imperial: ");
    scanf("%f", &millasPorGalon);

    float kilometrosPorLitro = conversionMillasAGalonImperial(millasPorGalon);

    printf("El rendimiento en kilometros por litro es: %.2f\n", kilometrosPorLitro);

    return 0;
}
