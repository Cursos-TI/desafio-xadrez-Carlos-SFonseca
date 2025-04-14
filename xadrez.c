#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    int torre = 5; //Quabtidade de passos da Torre para a Direita
    int bispo = 5; //Quabtidade de passos do Bispo para Cima, Direita
    int rainha = 8; //Quabtidade de passos da Rainha para Esquerda

    printf("Movendo a Torre:\n");
    for(int i=0; i< torre; i++){
        printf("Direita\n");
    }
    printf("\n");

    printf("Movendo o Bispo:\n");
    for(int i=0; i< bispo; i++){
        printf("Cima, Direita\n");
    }
    printf("\n");

    printf("Movendo a Rainha:\n");
    for(int i=0; i< rainha; i++){
        printf("Esquerda\n");
    }
    printf("\n");

    printf("Movendo o Cavalo:\n");
    int j; // Variável auxiliar para o loop alinhado do cavalo
    for(int i=0; i< 2; i++){
        j = 1;
        printf("Baixo\n");
        
        while (i==1 && j==1) //Quando o i==1 o Cavalo já deu 2 passos em uma direção, quando o j==1 o Cavalo ainda tem um passo na direçõa perpendicular a realizar. 
        {
            printf("Esquerda\n");
            j++; // Finaliza os passos do Cavalo.
        }   

    }
    printf("\n");

    return 0;
}
