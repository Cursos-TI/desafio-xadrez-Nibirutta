#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void moveBishop(int squares) {
    if (squares > 0)
    {
        for (int i = 0; i < 1; i++)
        {
            printf("Cima, ");
            for (int j = 0; j < 1; j++)
            {
                printf("Direita\n");
            }
        }

        moveBishop(squares - 1);
    }
}

void moveRook(int squares) {
    if (squares > 0) {
        printf("Direita\n");
        moveRook(squares - 1);
    }
}

void moveQueen(int squares) {
    if (squares > 0) {
        printf("Esquerda\n");
        moveQueen(squares - 1);
    }
}

void moveKnight(int squares) {
    if (squares > 0) {
        for (int i = 0; i < 1; i++)
        {
            printf("Cima\n");
            // Quando estiver no segundo movimento do eixo, executa o movimento final no outro eixo
            for (int j = 0; j < 1 && squares == 2; j++)
            {
                printf("Direita\n");
            }

            // Quando o movimento faltante estiver em 2, o movimento no outro eixo já será executado, zerando o total de movimentos da peça
            if (squares == 2) {
                break;
            }

            moveKnight(squares - 1);
        }
    }
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int bishopMovement = 5, rookMovement = 5, queenMovement = 8, knightMovement = 3;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("Movimentos do bispo: \n");
    moveBishop(bishopMovement);

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("Movimentos da torre: \n");
    moveRook(rookMovement);    

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("Movimentos da rainha: \n");
    moveQueen(queenMovement);

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("Movimento do cavalo: \n");
    moveKnight(knightMovement);

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
