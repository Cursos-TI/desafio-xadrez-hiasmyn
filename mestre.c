#include <stdio.h>
/*
    Projeto: Movimentação de Peças de Xadrez (Nível Avançado)
    Requisitos:
    - Recursividade: Torre, Bispo e Rainha
    - Cavalo: loops aninhados (múltiplas variáveis/condições) + continue/break
    - Bispo: também com loops aninhados (externo = vertical, interno = horizontal)
    - Linhas em branco separando as peças
*/
void moverTorre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

/* Bispo recursivo: cada “casa” da diagonal imprime duas direções */
void moverBispoRec(int casas) {
    if (casas <= 0) return;
    printf("Cima\n");
    printf("Direita\n");
    moverBispoRec(casas - 1);
}

/* ===== Bispo com loops aninhados (externo=vertical, interno=horizontal) ===== */
void moverBispoLoops(int casas) {
    for (int v = 0; v < casas; v++) {
        printf("Cima\n");
        for (int h = 0; h < 2; h++) {
            if (h > 0) continue;   /* só 1 passo horizontal por casa */
            printf("Direita\n");
        }
    }
}

/* ===== Cavalo: loops aninhados com múltiplas condições + break/continue =====
   Movimento: 2 para Cima e 1 para Direita (em “L”) */
void moverCavalo(void) {
    for (int comp = 0; comp < 2; comp++) {      /* 0=vertical, 1=horizontal */
        for (int passo = 1; passo <= 2; passo++) {
            if (comp == 0) {
                printf("Cima\n");               /* precisa de 2 passos verticais */
                if (passo == 2) break;          /* encerra o interno ao completar 2 */
            } else {
                if (passo > 1) continue;        /* só 1 passo horizontal */
                printf("Direita\n");
            }
        }
    }
}

int main(void) {
    /* valores definidos em código, como no enunciado */
    const int TORRE_PASSOS  = 5;  /* Direita */
    const int BISPO_PASSOS  = 5;  /* Diagonal Cima+Direita */
    const int RAINHA_PASSOS = 8;  /* Esquerda */

    printf("Movimento da Torre (recursivo):\n");
    moverTorre(TORRE_PASSOS);

    printf("\nMovimento do Bispo (recursivo):\n");
    moverBispoRec(BISPO_PASSOS);

    printf("\nMovimento da Rainha (recursivo):\n");
    moverRainha(RAINHA_PASSOS);

    printf("\nMovimento do Bispo (loops aninhados):\n");
    moverBispoLoops(BISPO_PASSOS);

    printf("\nMovimento do Cavalo (loops aninhados complexos):\n");
    moverCavalo();

    printf("\nFim da simulação dos movimentos.\n");
    return 0;
}
