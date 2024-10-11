#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 30;
     // TODO: (14) Declara un arreglo de tres apuntadores a entero
    int *arr_punteros[3];

    // TODO: (15) Asigna a cada apuntador la dirección de las variables a, b y c
    arr_punteros[0] = &a;
    arr_punteros[1] = &b;
    arr_punteros[2] = &c;

     // TODO: (16) Mostrar los valores usando los punteros
    printf("Valor de a: %d\n", *arr_punteros[0]);
    printf("Valor de b: %d\n", *arr_punteros[1]);
    printf("Valor de c: %d\n", *arr_punteros[2]);

    return 0;
}
