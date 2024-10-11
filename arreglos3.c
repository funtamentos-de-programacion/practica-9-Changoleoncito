/*
 * Este programa utiliza un apuntadores para invertir el contenido de un arreglo
 *
 */

#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
     // TODO: (6) Declara el apuntador al inicio del arreglo
    int *inicio = arr;  // Apunta al primer elemento del arreglo

    // TODO: (7) Declara el apuntador al final del arreglo
    int *final = arr + 4;  // Apunta al último elemento del arreglo (índice 4)

    // TODO: (8) Imprime el arreglo original
    printf("Arreglo original: [ ");
    for (int i = 0; i < 5; i++) {
        printf("%d, ", arr[i]);
    }
    printf("]\n");

    // TODO: (9) Crea un ciclo que invierta el arreglo, TIP: es necesario usar un apuntador temporal
    while (inicio < final) {
        // Intercambia los elementos a los que apuntan 'inicio' y 'final'
        int temporal = *inicio;
        *inicio = *final;
        *final = temporal;

        // Avanza el puntero 'inicio' hacia adelante y el puntero 'final' hacia atrás
        inicio++;
        final--;
    printf("[ ");
    for (int i = 0; i < 5; i++) {
        printf("%d, ", arr[i]);
    }
    printf(" ]\n");
    
    
    }
    return 0;
}
