#include <stdio.h>

int main() {
    // Definição das variáveis para o número de casas que cada peça pode se mover
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // Movimentação da Torre usando FOR
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        if (i > 0) { // Verifica se o movimento é válido
            printf("Direita %d\n", i);
        }
    }

    printf("\n"); // Separação dos movimentos

    // Movimentação do Bispo usando WHILE
    printf("Movimento do Bispo:\n");
    int i = 1;
    while (i <= casasBispo) {
        if (i > 0) { // Garante que o valor de i seja positivo antes de imprimir
            printf("Cima Direita %d\n", i);
        }
        i++;
    }

    printf("\n"); // Separação dos movimentos

    // Movimentação da Rainha usando DO-WHILE
    printf("Movimento da Rainha:\n");
    i = 1;
    do {
        if (i > 0) { // Condição para validar o movimento
            printf("Esquerda %d\n", i);
        }
        i++;
    } while (i <= casasRainha);

    return 0;
}