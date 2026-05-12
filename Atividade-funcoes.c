#include <stdio.h>
#include <stdlib.h>

void calcularHMS(int totalSegundos, int *horas, int *minutos, int *segundos) {
    *horas    = totalSegundos / 3600;
    *minutos  = (totalSegundos % 3600) / 60;
    *segundos = totalSegundos % 60;
}

int isPar(int numero) {
    return numero % 2 == 0;
}

int isImpar(int numero) {
    return numero % 2 != 0;
}

float media(float a, float b) {
    return (a + b) / 2.0;
}

float maior(float a, float b) {
    return (a > b) ? a : b;
}

float menor(float a, float b) {
    return (a < b) ? a : b;
}

int main() {
    
    int totalSeg, h, m, s;
    printf("=== Calcular H:M:S ===\n");
    printf("Digite o total de segundos: ");
    scanf("%d", &totalSeg);
    calcularHMS(totalSeg, &h, &m, &s);
    printf("Resultado: %dh : %dm : %ds\n\n", h, m, s);

    
    int numero;
    printf("=== Par ou Impar ===\n");
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    printf("isPar(%d)   = %s\n", numero, isPar(numero)   ? "true" : "false");
    printf("isImpar(%d) = %s\n\n", numero, isImpar(numero) ? "true" : "false");

    
    float a, b;
    printf("=== Media ===\n");
    printf("Digite dois numeros: ");
    scanf("%f %f", &a, &b);
    printf("media(%.2f, %.2f) = %.2f\n\n", a, b, media(a, b));

    
    float x, y;
    printf("=== Maior e Menor ===\n");
    printf("Digite dois numeros: ");
    scanf("%f %f", &x, &y);
    printf("maior(%.2f, %.2f) = %.2f\n", x, y, maior(x, y));
    printf("menor(%.2f, %.2f) = %.2f\n", x, y, menor(x, y));

    system("pause");
    return 0;
}
