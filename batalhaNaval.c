#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10
// Definição das constantes para o número de linhas e colunas da matriz novo

int main() {
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    char coluna[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int tabuleiro[10][10] = {0}; // ~ = água, 1 = Barco 1, 2 = Barco 2, 3 = Barco 3, 4 = Barco 4
    int opcao;

    printf("Bem Vindo ao jogo Batalha Naval!\n");

    printf("Menu Inicial:\n");
    printf("1. Jogar\n");
    printf("2. Sair\n");
    printf("Escolha uma opcao e pressione ENTER: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Iniciando o jogo...\n\n");


            // Verifica se as posições para o Barco 1 estão livres (horizontal)
        if (tabuleiro[0][5] == 0 && tabuleiro[0][6] == 0 && tabuleiro[0][7] == 0) {
            tabuleiro[0][5] = 1;
            tabuleiro[0][6] = 1;
            tabuleiro[0][7] = 1;
        } else {
            printf("Erro: Não foi possível posicionar o Barco 1. Posições ocupadas.\n");
    }

            // Verifica se as posições para o Barco 2 estão livres
        if  (tabuleiro[3][3] == 0 && tabuleiro[4][3] == 0 && tabuleiro[5][3] == 0) {
            tabuleiro[3][3] = 2;
            tabuleiro[4][3] = 2;
            tabuleiro[5][3] = 2;
        } else {
            printf("Erro: Não foi possível posicionar o Barco 2. Posições ocupadas.\n");
    }

            // Verifica se as posições para o Barco 3 estão livres
        if  (tabuleiro[3][0] == 0 && tabuleiro[2][1] == 0 && tabuleiro[1][2] == 0) {
            tabuleiro[3][0] = 3;
            tabuleiro[2][1] = 3;
            tabuleiro[1][2] = 3;
        } else {
            printf("Erro: Não foi possível posicionar o Barco 3. Posições ocupadas.\n");
    }

            // Verifica se as posições para o Barco 4 estão livres
        if  (tabuleiro[7][6] == 0 && tabuleiro[8][7] == 0 && tabuleiro[9][8] == 0) {
            tabuleiro[7][6] = 4;
            tabuleiro[8][7] = 4;
            tabuleiro[9][8] = 4;
        } else {
            printf("Erro: Não foi possível posicionar o Barco 4. Posições ocupadas.\n");
    }

            
            printf("  ");
            for (int j = 0; j < 10; j++) {
                printf(" %c", coluna[j]); // Imprime as colunas
            }
            printf("\n");
            
            for (int i = 0; i < 10; i++) {
                printf("%c ", linha[i]); // Imprime as linhas

                for (int j = 0; j < 10; j++) {
                        if (tabuleiro[i][j] == 1)
                        printf(" 3");  // Barco 1

                    else if (tabuleiro[i][j] == 2)
                        printf(" 3");   //Barco 2

                    else if (tabuleiro[i][j] == 3)
                        printf(" 3");  // Barco 3

                    else if (tabuleiro[i][j] == 4)
                        printf(" 3");  // Barco 4

                    else
                        printf(" ~"); // Achei mais interessante usar ~ para representar água
                }
                printf("\n");
            }

            break;

        case 2:
            printf("Saindo do jogo. Obrigado por jogar!\n");
            break;

        default:
            printf("Opcao invalida. Tente novamente.\n");
            break;
    }

    return 0;
}