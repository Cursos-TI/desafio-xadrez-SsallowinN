#include <stdio.h>

int main() {
    // Número de casas para mover cada peça
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    printf("Movimento da Torre (for):\n");
    // Torre: 5 casas para a direita usando 'for'
    // Move em linha reta horizontalmente para a direita
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\nMovimento do Bispo (while):\n");
    // Bispo: 5 casas na diagonal para cima e à direita usando 'while'
    // Imprime "Cima, Direita" para cada casa diagonal
    int contadorBispo = 1;
    while (contadorBispo <= casasBispo) {
        printf("Cima, Direita\n");
        contadorBispo++;
    }

    printf("\nMovimento da Rainha (do-while):\n");
    // Rainha: 8 casas para a esquerda usando 'do-while'
    // Move em linha reta horizontalmente para a esquerda
    int contadorRainha = 1;
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= casasRainha);

    return 0;
}