#include <stdio.h>

// Função recursiva para mover a Torre
void moverTorre(int casasRestantes, int linhaTorre, int colunaTorre) {
    // Caso base: Se o número de casas a serem movidas for 0, não faz mais movimento
    if (casasRestantes == 0) {
        return;
    }

    // Move a Torre uma casa para a direita e imprime a direção
    colunaTorre++;
    printf("Direita\n");

    // Chama recursivamente para o próximo movimento da Torre
    moverTorre(casasRestantes - 1, linhaTorre, colunaTorre);
}

// Função recursiva para mover o Bispo com loops aninhados
void moverBispo(int casasRestantes, int linhaBispo, int colunaBispo) {
    // Caso base: Se o número de casas a serem movidas for 0, não faz mais movimento
    if (casasRestantes == 0) {
        return;
    }

    // Move o Bispo uma casa para cima (diminuir linha) e uma casa para a direita (aumentar coluna)
    linhaBispo--;  // Movimento para cima
    colunaBispo++; // Movimento para a direita

    // Imprime a direção "Cima" e "Direita"
    printf("Cima\n");
    printf("Direita\n");

    // Chama a função recursivamente para o próximo movimento do Bispo
    moverBispo(casasRestantes - 1, linhaBispo, colunaBispo);
}

// Função recursiva para mover a Rainha
void moverRainha(int casasRestantes, int linhaRainha, int colunaRainha) {
    // Caso base: Se o número de casas a serem movidas for 0, não faz mais movimento
    if (casasRestantes == 0) {
        return;
    }

    // Move a Rainha uma casa para a esquerda
    colunaRainha--;
    printf("Esquerda\n");

    // Chama recursivamente para o próximo movimento da Rainha
    moverRainha(casasRestantes - 1, linhaRainha, colunaRainha);
}

// Função recursiva para mover o Cavalo
void moverCavalo(int casasRestantes, int linhaCavalo, int colunaCavalo) {
    // Caso base: Se o número de casas a serem movidas for 0, não faz mais movimento
    if (casasRestantes == 0) {
        return;
    }

    // O Cavalo se move 2 casas para cima
    for (int i = 0; i < 2; i++) {
        linhaCavalo--;
        printf("Cima\n");
    }

    // O Cavalo se move 1 casa para a direita
    colunaCavalo++;
    printf("Direita\n");

    // Chama recursivamente para o próximo movimento do Cavalo
    moverCavalo(casasRestantes - 1, linhaCavalo, colunaCavalo);
}

int main() {
    // Definindo as quantidades de casas a serem movidas
    int casasTorre = 5;   // A Torre se moverá 5 casas para a direita
    int casasBispo = 5;   // O Bispo se moverá 5 casas na diagonal (para cima e à direita)
    int casasRainha = 8;  // A Rainha se moverá 8 casas para a esquerda
    int casasCavalo = 1;  // O Cavalo fará 1 movimento em "L" (2 casas para cima, 1 para a direita)

    // Posições iniciais das peças
    int linhaTorre = 1, colunaTorre = 1;     // Posição inicial da Torre
    int linhaBispo = 8, colunaBispo = 3;     // Posição inicial do Bispo
    int linhaRainha = 1, colunaRainha = 8;   // Posição inicial da Rainha
    int linhaCavalo = 8, colunaCavalo = 1;   // Posição inicial do Cavalo

    // Movimentos da Torre
    printf("Movimento da Torre: %d casas para a direita\n", casasTorre);
    moverTorre(casasTorre, linhaTorre, colunaTorre);
    printf("\n");  // Linha em branco para separar os movimentos

    // Movimentos do Bispo
    printf("Movimento do Bispo: %d casas na diagonal para cima e à direita\n", casasBispo);
    moverBispo(casasBispo, linhaBispo, colunaBispo);
    printf("\n");  // Linha em branco para separar os movimentos

    // Movimentos da Rainha
    printf("Movimento da Rainha: %d casas para a esquerda\n", casasRainha);
    moverRainha(casasRainha, linhaRainha, colunaRainha);
    printf("\n");  // Linha em branco para separar os movimentos

    // Movimentos do Cavalo
    printf("Movimento do Cavalo (2 casas para cima e 1 casa para a direita):\n");
    moverCavalo(casasCavalo, linhaCavalo, colunaCavalo);  // Chama a função para mover o Cavalo
    printf("\n");  // Linha em branco para separar os movimentos

    return 0;  // Retorna 0 indicando que o programa terminou corretamente
}
