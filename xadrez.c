int main() {
    //Movimentação das Peças
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
    int j = 0;
    while (j < TORRE_MOVIMENTACAO) {
        printf("Direita\n");
        j++;
    }

    //Movimentação da Rainha (Do-While)
    printf("\nMovimentação da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < RAINHA_MOVIMENTACAO);

    //Movimentação do Cavalo
    printf("\nMovimentação do Cavalo:\n");
    for (int i = 0; i < 2; i++) {
        printf("Baixo\n");
    }
    printf("Esquerda\n");


    return 0;
}
