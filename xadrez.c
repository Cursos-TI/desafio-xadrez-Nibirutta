#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int bishopMovement = 5, rookMovement = 5, queenMovement = 8, knightMovement = 3;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("Movimentos do bispo: \n");
    do
    {
        printf("Cima, direita\n");
        bishopMovement--;
    } while (bishopMovement > 0);

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("Movimentos da torre: \n");
    while (rookMovement > 0)
    {
        printf("Direita\n");
        rookMovement--;
    }    

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("Movimentos da rainha: \n");
    for (queenMovement; queenMovement > 0; queenMovement--)
    {
        printf("Esquerda\n");
    }

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("Movimento do cavalo: \n");
    // Para testar meu raciocinio, eu optei por fazer uma lógica inversa e aplicando duas variáveis
    // O cavalo se move por três casas, sendo duas na mesmo eixo e uma no outro eixo
    // Ao realizar qualquer movimento, eu subtraio o total de movimentos do cavalo, fazendo o loop externo ser executado apenas uma vez no outro eixo.
    for (knightMovement; knightMovement > 0; knightMovement--)
    {
        int forwardMovement = 2;
        while(forwardMovement > 0 && knightMovement != 1) 
        {
            printf("Baixo\n");
            knightMovement--;
        }
        printf("Esquerda\n");
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
