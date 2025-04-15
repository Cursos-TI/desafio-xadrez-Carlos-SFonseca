#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void MoverTorre(int passos){ // Função recursiva para mover a Torre
    if(passos>0){
        printf("Direita\n");
        MoverTorre(passos-1);
    }

}

void MoverRainha(int passos){ // Função recursiva para mover a Rainha
    if(passos>0){
        printf("Esquerda\n");
        MoverRainha(passos-1);
    }

}

void MoverBispo(int passos){ // Função recursiva para mover o Bispo

    if(passos>0){
        int i = 0, j = 0; //variáveis auxiliares para os loops aninhadoss
        do{
            printf("Cima, ");

            do{
                printf("Direita\n");
            }while (j>0);           
            
        }while(i>0);
        MoverBispo(passos-1);
    }
}


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
    MoverTorre(torre);
    printf("\n");

    printf("Movendo o Bispo:\n");
    MoverBispo(bispo);
    printf("\n");

    printf("Movendo a Rainha:\n");
    MoverRainha(rainha);
    printf("\n");

    printf("Movendo o Cavalo:\n");
    
    for(int i=0, j=0; i< 2; i++){ //movimentação do Cavalo utilizando loop com variáveis múltiplas, com o i controlando os primeiros 2 passos e o j controlando o passo perpendicular.
        
        printf("Cima\n");

        while (j==0) 
        {
            if(i==0){
                break;
            }
            printf("Direita\n");
            j++;
           
        }   

    }
    printf("\n");

    return 0;
}
