#include <stdio.h>

int main() {
    // ============================================
    // Simulação dos movimentos das peças de xadrez
    // Torre (for), Bispo (while) e Rainha (do-while)
    // ============================================

    // --------------------------------------------
    // TORRE - move-se 5 casas para a direita
    // Estrutura usada: for
    // --------------------------------------------
    int movimentoTorre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= movimentoTorre; i++) {
        printf("Direita %d\n", i);
    }

    // --------------------------------------------
    // BISPO - move-se 5 casas na diagonal
    // (para cima e para a direita)
    // Estrutura usada: while
    // --------------------------------------------
    int movimentoBispo = 5;
    int contadorBispo = 1;

    printf("\nMovimento do Bispo:\n");
    while (contadorBispo <= movimentoBispo) {
        printf("Cima Direita %d\n", contadorBispo);
        contadorBispo++;
    }

    // --------------------------------------------
    // RAINHA - move-se 8 casas para a esquerda
    // Estrutura usada: do-while
    // --------------------------------------------
    int movimentoRainha = 8;
    int contadorRainha = 1;

    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda %d\n", contadorRainha);
        contadorRainha++;
    } while (contadorRainha <= movimentoRainha);

    // --------------------------------------------
    // Fim da simulação
    // --------------------------------------------
    printf("\nFim da simulação dos movimentos.\n");

    return 0;
}
