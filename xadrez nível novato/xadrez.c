#include <stdio.h>

int main() {
    // Define o número de casas que cada peça vai mover
    int casasTorre = 5;   // Número de casas que a Torre vai mover para a direita
    int casasBispo = 5;   // Número de casas que o Bispo vai mover na diagonal para cima e à direita
    int casasRainha = 8;  // Número de casas que a Rainha vai mover para a esquerda
    
    // Movimento da Torre usando for
    printf("Movimento da Torre: %d casas para a direita\n", casasTorre);
    
    // Definindo as coordenadas iniciais da Torre (linha 1, coluna 1)
    int linhaTorre = 1;
    int colunaTorre = 1;

    // Estrutura para mover a Torre 5 casas para a direita
    for (int i = 0; i < casasTorre; i++) {
        colunaTorre++;  // Aumenta a coluna para mover para a direita
        printf("Direita\n"); // Imprime a direção "Direita" a cada movimento
    }

    // Movimento do Bispo usando while
    printf("\nMovimento do Bispo: %d casas na diagonal para cima e à direita\n", casasBispo);
    
    // Definindo as coordenadas iniciais do Bispo (linha 8, coluna 1)
    int linhaBispo = 1;
    int colunaBispo = 3;

    // Contador para o movimento do Bispo
    int iBispo = 0;

    // Estrutura para mover o Bispo 5 casas na diagonal (cima e direita)
    while (iBispo < casasBispo) {
        linhaBispo--;  // Move uma casa para cima (linha diminui)
        colunaBispo++; // Move uma casa para a direita (coluna aumenta)
        
        // Imprime a direção "Cima Direita" a cada movimento do Bispo
        printf("Cima Direita\n");
        
        // Incrementa o contador de movimentos
        iBispo++;
    }

    // Movimento da Rainha usando do-while
    printf("\nMovimento da Rainha: %d casas para a esquerda\n", casasRainha);
    
    // Definindo as coordenadas iniciais da Rainha (linha 1, coluna 8)
    int linhaRainha = 1;
    int colunaRainha = 8;

    // Contador para o movimento da Rainha
    int iRainha = 0;

    // Estrutura "do-while" para mover a Rainha 8 casas para a esquerda
    do {
        colunaRainha--;  // Move uma casa para a esquerda (coluna diminui)
        printf("Esquerda\n"); // Imprime a direção "Esquerda" a cada movimento da Rainha
        
        // Incrementa o contador de movimentos
        iRainha++;
    } while (iRainha < casasRainha); // Continua até que a Rainha tenha se movido 8 casas

    return 0; // Retorna 0 indicando que o programa terminou corretamente
}