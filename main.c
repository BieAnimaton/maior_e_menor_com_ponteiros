#include <stdio.h>
#include <stdlib.h>

void maior_e_menor(int vetor_rec[], int tamanho, int *maior, int *menor){

    *maior = vetor_rec[0];
    *menor = vetor_rec[0];

    for (int i = 0; i < tamanho; i++) {


        if (*menor > vetor_rec[i]) {
            *menor = vetor_rec[i];
        }

        if (*maior < vetor_rec[i]) {
            *maior = vetor_rec[i];
        }
    }


    printf("\n\nMaior valor: %d\n", *maior);
    printf("Menor valor: %d\n", *menor);
}

int main()
{
    int maior, menor;
    int vetor[] = {21, -456, 3, 34, 5, -90, 7, 8, 987, 435};

    printf("O vetor possui os seguintes valores: [");
    for (int i = 0; i < 10; i++) {
        printf("%d", vetor[i]);
        if (i < 9) {
            printf(", ");
        }
    }
    printf("]");

    maior_e_menor(vetor, 10, &maior, &menor);

    return 0;
}
