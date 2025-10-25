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

    printf("\n"); // separador visual


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

    printf("\n");


    // -----------------------------
    // Movimento do CAVALO (usando loops aninhados)
    // -----------------------------
    int movimentosVerticais = 2;  // duas casas para baixo
    int movimentosHorizontais = 1; // uma casa para a esquerda
    int i;

    printf("Movimento do Cavalo (duas para baixo e uma para a esquerda):\n");

    // Primeiro loop FOR (obrigatório) — movimento vertical
    for (i = 1; i <= movimentosVerticais; i++) {
        printf("Baixo\n");

        // Loop interno (WHILE) — usado aqui para mostrar que há um loop dentro do outro
        int controle = 0;
        while (controle < 1) {
            // Esse while roda uma vez a cada passo da vertical
            controle++;
        }
    }

    // Após os dois movimentos verticais, o cavalo move uma casa horizontalmente
    int contador = 0;
    do {
        printf("Esquerda\n");
        contador++;
    } while (contador < movimentosHorizontais);

    printf("\nSimulação concluída!\n");

    return 0;
}
