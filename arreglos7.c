#include <stdio.h>

int main() {
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    //TODO: (20) Crea un apuntador que apunte al primer elemento de la matriz
    int *ptr = &arr[0][0];
    // Acceso usando índices
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", *(ptr + i*3 +j));
        }
        printf("\n");
    }
    printf("\n");
     for (int i = 0; i < 9; i++) {
            printf("%d\t", *(ptr +i));
            ((i+1)%3==0)?printf("\n") : printf("");  
    }
    return 0;
}