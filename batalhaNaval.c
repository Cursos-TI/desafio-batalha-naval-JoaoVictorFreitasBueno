#include <stdio.h>

int main() {
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    char coluna[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int tabuleiro[10][10] = {0};  // 0 = água, 1 = Submarino, 2 = Contratorpedeiro
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

        //Posicionamento dos barco 1 (Horizontal)
            tabuleiro[0][5] = 1; // A5
            tabuleiro[0][6] = 1; // A6
            tabuleiro[0][7] = 1; // A7

        //posicionamento barco 2 (Vertical)
            tabuleiro[3][3] = 2; // D4
            tabuleiro[4][3] = 2; // E4
            tabuleiro[5][3] = 2; // F4

            
            printf("  ");
            for (int j = 0; j < 10; j++) {
                printf(" %c", coluna[j]);
            }
            printf("\n");
            
            for (int i = 0; i < 10; i++) {
                printf("%c ", linha[i]);
                for (int j = 0; j < 10; j++) {
                    if (tabuleiro[i][j] == 1)
                        printf(" 3");  // Barco 1
                    else if (tabuleiro[i][j] == 2)
                        printf(" 3");  //Barco 2
                    else
                        printf(" 0"); // Água
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