#include <stdio.h>

// -------------------------------------------
// Função recursiva para movimentar a TORRE
// -------------------------------------------
void moverTorre(int casasRestantes) {
    // Caso base: se não há mais casas para mover, encerra a recursão
    if (casasRestantes == 0)
        return;

    printf("Direita\n");

    // Chamada recursiva reduzindo o número de casas restantes
    moverTorre(casasRestantes - 1);
}

// -------------------------------------------
// Função recursiva para movimentar o BISPO
// (com loops aninhados dentro da recursão)
// -------------------------------------------
void moverBispo(int casasRestantes) {
    if (casasRestantes == 0)
        return;

    // Loop aninhado simulando o movimento diagonal (vertical + horizontal)
    for (int v = 0; v < 1; v++) { // movimento vertical
        for (int h = 0; h < 1; h++) { // movimento horizontal
            printf("Cima, Direita\n");
        }
    }

    moverBispo(casasRestantes - 1); // chamada recursiva
}

// -------------------------------------------
// Função recursiva para movimentar a RAINHA
// -------------------------------------------
void moverRainha(int casasRestantes) {
    if (casasRestantes == 0)
        return;

    printf("Esquerda\n");

    moverRainha(casasRestantes - 1); // chamada recursiva
}

// -------------------------------------------
// Movimento complexo do CAVALO
// (usando loops aninhados e controle de fluxo)
// -------------------------------------------
void moverCavalo() {
    int movimentosVerticais = 2;  // duas casas para cima
    int movimentosHorizontais = 1; // uma casa para a direita

    printf("Movimento do Cavalo (duas para cima e uma para a direita):\n");

    // Loop externo controla o movimento vertical
    for (int i = 1; i <= movimentosVerticais; i++) {

        // Loop interno controla possíveis verificações horizontais
        for (int j = 1; j <= 2; j++) {

            // Se for o segundo passo do movimento vertical, interrompe o loop interno
            if (i == 2 && j == 2) {
                break; // sai do loop interno
            }

            printf("Cima\n");
        }

        // Usa 'continue' para pular a parte horizontal nas duas primeiras casas
        if (i < movimentosVerticais) {
            continue;
        }

        // Quando terminar as duas casas verticais, move uma para a direita
        int contador = 0;
        while (contador < movimentosHorizontais) {
            printf("Direita\n");
            contador++;
        }
    }
}

// -------------------------------------------
// Função principal
// -------------------------------------------
int main() {
    // TORRE
    printf("Movimento da Torre (recursivo - para a direita):\n");
    moverTorre(5);
    printf("\n");

    // BISPO
    printf("Movimento do Bispo (recursivo e com loops aninhados - diagonal superior direita):\n");
    moverBispo(5);
    printf("\n");

    // RAINHA
    printf("Movimento da Rainha (recursivo - para a esquerda):\n");
    moverRainha(8);
    printf("\n");

    // CAVALO
    moverCavalo();
    printf("\nSimulação concluída!\n");

    return 0;
}
