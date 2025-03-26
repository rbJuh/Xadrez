#include <stdio.h>

int main() {
    // Definindo o número de casas que cada peça vai mover
    int casasTorre = 5;    // Número de casas que a Torre vai mover para a direita
    int casasBispo = 5;    // Número de casas que o Bispo vai mover na diagonal para cima e à direita
    int casasRainha = 8;   // Número de casas que a Rainha vai mover para a esquerda
    int casasCavaloVertical = 2;   // Número de casas que o Cavalo vai mover para baixo (vertical)
    int casasCavaloHorizontal = 1; // Número de casas que o Cavalo vai mover para a esquerda (horizontal)

    // Movimentos da Torre usando for
    printf("Movimento da Torre: %d casas para a direita\n", casasTorre);
    
    // Definindo a posição inicial da Torre (linha 1, coluna 1)
    int linhaTorre = 1;
    int colunaTorre = 1;

    // Movendo a Torre para a direita
    for (int i = 0; i < casasTorre; i++) {
        colunaTorre++;  // Aumenta a coluna para mover para a direita
        printf("Direita\n"); // Imprime "Direita" a cada movimento
    }

    // Movimento do Bispo usando while
    printf("\nMovimento do Bispo: %d casas na diagonal para cima e à direita\n", casasBispo);
    
    // Definindo a posição inicial do Bispo (linha 1, coluna 3)
    int linhaBispo = 1;
    int colunaBispo = 3;

    // Contador para os movimentos do Bispo
    int iBispo = 0;

    // Movendo o Bispo para cima e à direita
    while (iBispo < casasBispo) {
        linhaBispo--;  // Move para cima (diminuindo a linha)
        colunaBispo++; // Move para a direita (aumentando a coluna)
        
        printf("Cima Direita\n");  // Imprime "Cima Direita" a cada movimento do Bispo
        iBispo++;  // Incrementa o contador de movimentos
    }

    // Movimento da Rainha usando do-while
    printf("\nMovimento da Rainha: %d casas para a esquerda\n", casasRainha);
    
    // Definindo a posição inicial da Rainha (linha 1, coluna 8)
    int linhaRainha = 1;
    int colunaRainha = 8;

    // Contador para os movimentos da Rainha
    int iRainha = 0;

    // Movendo a Rainha para a esquerda
    do {
        colunaRainha--;  // Move para a esquerda (diminuindo a coluna)
        printf("Esquerda\n"); // Imprime "Esquerda" a cada movimento da Rainha
        iRainha++;  // Incrementa o contador de movimentos
    } while (iRainha < casasRainha); // Continua enquanto a Rainha não mover 8 casas

    // Separando o movimento do Cavalo com uma linha em branco
    printf("\n");

    // Movimento do Cavalo usando for
    printf("Movimento do Cavalo: %d casas para baixo e %d casa para a esquerda\n", casasCavaloVertical, casasCavaloHorizontal);
    
    // Definindo a posição inicial do Cavalo (linha 1, coluna 8)
    int linhaCavalo = 1;
    int colunaCavalo = 8;

    // O Cavalo se move em "L" (2 para baixo e 1 para a esquerda)
    for (int i = 0; i < 1; i++) {  // O Cavalo faz 1 movimento "L"
        
        // Movendo o Cavalo 2 casas para baixo (vertical)
        int j = 0;
        while (j < casasCavaloVertical) {
            linhaCavalo++;  // Move para baixo (incrementando a linha)
            printf("Baixo\n");  // Imprime "Baixo" para cada movimento vertical
            j++;  // Incrementa o contador de movimento vertical
        }

        // Movendo o Cavalo 1 casa para a esquerda (horizontal)
        colunaCavalo--;  // Move para a esquerda (diminuindo a coluna)
        printf("Esquerda\n");  // Imprime "Esquerda" para o movimento horizontal
    }

    return 0; // Retorna 0, indicando que o programa terminou corretamente
}
