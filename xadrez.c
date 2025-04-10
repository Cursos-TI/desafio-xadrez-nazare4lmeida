#include <stdio.h>

int main() {
    //Criei as Constantes para definir o número de casas que cada peça deve se mover
    const int MOVIMENTO_TORRE = 5;
    const int MOVIMENTO_BISPO = 5;
    const int MOVIMENTO_RAINHA = 8;

    //Usei a estrutura for pra torre porque sei quantos movimentos deve fazer:
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= MOVIMENTO_TORRE; i++) {
        printf("Direita\n");
    }

    printf("\n"); 

    //Utilizei while pro bispo para variar a estrutura
    printf("Movimento do Bispo:\n");
    int j = 1;
    while (j <= MOVIMENTO_BISPO) {
        printf("Cima Direita\n");
        j++;
    }

    printf("\n"); 

    //Usei o do-while para a Rainha, garantindo que o movimento seja feito ao menos uma vez
    printf("Movimento da Rainha:\n");
    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= MOVIMENTO_RAINHA);

    return 0;
}

