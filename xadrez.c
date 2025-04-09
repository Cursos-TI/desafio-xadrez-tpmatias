int main() {
    // Movimentação das Peças
    const int BISPO_MOVIMENTACAO = 5;
    const int TORRE_MOVIMENTACAO = 5;
    const int RAINHA_MOVIMENTACAO = 8;

    //Movimentação do Bispo (For)
    printf("Movimentação do Bispo:\n");
    for (int i = 0; i < BISPO_MOVIMENTACAO; i++) {
        printf("Diagonal superior direita\n");
    }

    //Movimentação da Torre (While)
    printf("\nMovimentação da Torre:\n");
    int i = 0;
    while (i < TORRE_MOVIMENTACAO) {
        printf("Direita\n");
        i++;
    }

    // Movimentação da Rainha (Do-While)
    printf("\nMovimentação da Rainha:\n");
    int j = 0;
    do {
        printf("Esquerda\n");
        j++;
    } while (j < RAINHA_MOVIMENTACAO);

    return 0;
}
