#include <stdio.h>

int main() {
    // Número de casas para mover cada peça
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    printf("Movimento da Torre (for):\n");
    // Torre: 5 casas para a direita usando 'for'
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\nMovimento do Bispo (while):\n");
    // Bispo: 5 casas na diagonal para cima e à direita usando 'while'
    int contadorBispo = 1;
    while (contadorBispo <= casasBispo) {
        printf("Cima, Direita\n");
        contadorBispo++;
    }

    printf("\nMovimento da Rainha (do-while):\n");
    // Rainha: 8 casas para a esquerda usando 'do-while'
    int contadorRainha = 1;
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= casasRainha);

    // Movimento do Cavalo
    printf("\nMovimento do Cavalo (loops aninhados):\n");
    /*
        O Cavalo move em "L": duas casas para baixo e uma casa para a esquerda.
        Vamos usar:
        - Loop for para movimentar as duas casas para baixo
        - Loop while aninhado para mover a casa para a esquerda depois das duas casas para baixo
    */

    int casasParaBaixo = 2;
    int casasParaEsquerda = 1;

    // Loop for para as casas para baixo
    for (int i = 1; i <= casasParaBaixo; i++) {
        printf("Baixo\n");
    }

    // Loop while para a casa para a esquerda
    int contadorEsquerda = 1;
    while (contadorEsquerda <= casasParaEsquerda) {
        printf("Esquerda\n");
        contadorEsquerda++;
    }

    return 0;
}