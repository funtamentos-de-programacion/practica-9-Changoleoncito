#include <stdio.h>

int main(){
    int arr[]= {1, 2, 3, 4, 5};
   // TODO: (4) Declara un apuntador que apunte al primer elemento del arreglo
    int *ptr = arr;  // Apunta al primer elemento del arreglo (equivalente a &arr[0])

    // TODO: (5) Recorre el arreglo utilizando notación de punteros
    printf("Recorriendo arr usando punteros:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));  // Accede a los elementos usando aritmética de punteros
    }
    printf("\n");
    return 0;
}