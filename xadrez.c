#include <stdio.h>

// Função recursiva para mover a Torre (linha reta para a direita)
void moverTorreRecursivo(int casasRestantes) {
    if (casasRestantes == 0) {
        return;  // Condição de parada da recursão
    }

    printf("Direita\n");  // Imprime movimento para a direita
    moverTorreRecursivo(casasRestantes - 1);  // Chamada recursiva decrementando casas
}

// Função recursiva para mover a Rainha (linha reta para a esquerda)
void moverRainhaRecursivo(int casasRestantes) {
    if (casasRestantes == 0) {
        return;  // Condição de parada da recursão
    }

    printf("Esquerda\n");  // Imprime movimento para a esquerda
    moverRainhaRecursivo(casasRestantes - 1);  // Chamada recursiva decrementando casas
}

// Função recursiva para mover o Bispo com loops aninhados
// Vertical externo: movimento para cima
// Horizontal interno: movimento para a direita
void moverBispoRecursivoComLoops(int casasVerticais, int casasHorizontais) {
    if (casasVerticais == 0) {
        return;  // Condição de parada da recursão
    }

    // Loop interno para o movimento horizontal
    for (int horizontal = 1; horizontal <= casasHorizontais; horizontal++) {
        printf("Cima, Direita\n");
    }

    // Chamada recursiva para continuar o movimento vertical
    moverBispoRecursivoComLoops(casasVerticais - 1, casasHorizontais);
}

// Função para movimentar o Cavalo com loops aninhados complexos
// Movimento em "L": 2 casas para cima e 1 para a direita
// Usa break e continue para controle do fluxo
void moverCavaloComLoopsComplexos(int casasParaCima, int casasParaDireita) {
    int movimentosParaCima = 0;
    int movimentosParaDireita = 0;

    // Loop externo controla os movimentos verticais
    for (int tentativaVertical = 0; tentativaVertical < casasParaCima + 2; tentativaVertical++) {
        if (movimentosParaCima >= casasParaCima) {
            // Movimentos verticais concluídos, iniciar movimentos horizontais
            for (int tentativaHorizontal = 0; tentativaHorizontal < casasParaDireita + 2; tentativaHorizontal++) {
                if (movimentosParaDireita >= casasParaDireita) {
                    break;  // Movimento completo, sair do loop horizontal
                }

                printf("Direita\n");
                movimentosParaDireita++;

                continue;  // Continue é opcional aqui, apenas ilustrativo
            }
            break;  // Sair do loop vertical após concluir movimentos horizontais
        }

        printf("Cima\n");
        movimentosParaCima++;
    }
}

int main() {
    // Quantidade de casas para cada movimento
    const int casasTorre = 5;
    const int casasBispoVerticais = 5;
    const int casasBispoHorizontais = 5;
    const int casasRainha = 8;
    const int casasCavaloParaCima = 2;
    const int casasCavaloParaDireita = 1;

    printf("Movimento da Torre (recursivo):\n");
    moverTorreRecursivo(casasTorre);

    printf("\nMovimento do Bispo (recursivo com loops aninhados):\n");
    moverBispoRecursivoComLoops(casasBispoVerticais, casasBispoHorizontais);

    printf("\nMovimento da Rainha (recursivo):\n");
    moverRainhaRecursivo(casasRainha);

    printf("\nMovimento do Cavalo (loops aninhados complexos):\n");
    moverCavaloComLoopsComplexos(casasCavaloParaCima, casasCavaloParaDireita);

    return 0;
}