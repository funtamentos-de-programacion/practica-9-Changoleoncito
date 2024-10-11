    #include <stdio.h>


    int main(){
        int arr[] = {1, 2, 3, 4, 5};
        char str[] = "hola mundo";
        char str2[5];
        str2[0] = 'A';
        str2[1] = 'd';
        str2[2] = 'i';
        str2[3] = 'ó';
        str2[5] = 's';

        printf("Recorriendo arr:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // TODO: (2) Recorre str mediante un índice usando un ciclo
    printf("Recorriendo str:\n");
    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c", str[i]);
    }
    printf("\n");

    // TODO: (3) Recorre str2 mediante un índice usando un ciclo
    printf("Recorriendo str2:\n");
    for (int i = 0; str2[i] != '\0'; i++) {
        printf("%c", str2[i]);
    }
    printf("\n");

    return 0;
    }   