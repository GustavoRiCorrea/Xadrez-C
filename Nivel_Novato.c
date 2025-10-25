#include <stdio.h>

int main() {
    // -----------------------------
    // Movimento da TORRE (usando FOR)
    // -----------------------------
    int casasTorre = 5; // número de casas que a torre vai se mover
    printf("Movimento da Torre (para a direita):\n");

    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\n"); // quebra de linha para separar as peças


    // -----------------------------
    // Movimento do BISPO (usando WHILE)
    // -----------------------------
    int casasBispo = 5; // número de casas que o bispo vai se mover
    int contadorBispo = 1;

    printf("Movimento do Bispo (diagonal para cima e à direita):\n");

    while (contadorBispo <= casasBispo) {
        printf("Cima, Direita\n");
        contadorBispo++;
    }

    printf("\n");


    // -----------------------------
    // Movimento da RAINHA (usando DO-WHILE)
    // -----------------------------
    int casasRainha = 8; // número de casas que a rainha vai se mover
    int contadorRainha = 1;

    printf("Movimento da Rainha (para a esquerda):\n");

    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= casasRainha);

    printf("\nSimulação concluída!\n");

    return 0;
}
