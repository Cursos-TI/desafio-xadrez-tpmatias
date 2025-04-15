#include <stdio.h>

// Função recursiva para movimentação do Bispo
void movimentacaoBispo(int i) {
    if (i < 5) {
        printf("Diagonal superior direita\n");
        movimentacaoBispo(i + 1);
    }
}

// Função recursiva para movimentação da Torre
void movimentacaoTorre(int i) {
    if (i < 5) {
        printf("Direita\n");
        movimentacaoTorre(i + 1);
    }
}

// Função recursiva para movimentação da Rainha
void movimentacaoRainha(int i) {
    if (i < 8) {
        printf("Esquerda\n");
        movimentacaoRainha(i + 1);
    }
}

int main() {
    // Movimentação do Bispo
    printf("Movimentação do Bispo:\n");
    movimentacaoBispo(0);

    // Movimentação da Torre
    printf("\nMovimentação da Torre:\n");
    movimentacaoTorre(0);

    // Movimentação da Rainha
    printf("\nMovimentação da Rainha:\n");
    movimentacaoRainha(0);

    // Movimentação do Cavalo
    printf("\nMovimentação do Cavalo:\n");
    for (int i = 0; i < 2; i++) {
        printf("Cima\n");
    }
    printf("Direita\n");

    return 0;
}
