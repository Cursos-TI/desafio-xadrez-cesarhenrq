#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void movimentacao_bispo(int casas_restantes) {
    if (casas_restantes > 0) {
        for (int i = 0; i < 1; i++) { 
            printf("Cima\n");

            for (int j = 0; j < 1; j++) {
                printf("Esquerda\n");
            }
        }

        movimentacao_bispo(casas_restantes - 1);
    }
}


void movimentacao_simples(int casas, char* direcao) {
    if (casas > 0) {
        printf("%s\n", direcao);
        movimentacao_simples(casas - 1, direcao);
    }
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int numero_casas_bispo = 5, numero_casas_torre = 5, numero_casas_rainha = 8, numero_casas_cavalo = 3; 

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("Movimentação do Bispo:\n");
    movimentacao_bispo(numero_casas_bispo);

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("\nMovimentação da Torre:\n");
    movimentacao_simples(numero_casas_torre, "Direita");

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("\nMovimentação da Rainha:\n");
    movimentacao_simples(numero_casas_rainha, "Esquerda");
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("\nMovimentação do Cavalo:\n");
    for(int i = 1; i <= numero_casas_cavalo; i++) {
        if (i < 3) {
            continue;
        }

        for(int j = 1; j <= numero_casas_cavalo; j++) {
            if (j < 2) {
                continue;
            }
            printf("Cima\n");
        }
        printf("Direita\n");
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
