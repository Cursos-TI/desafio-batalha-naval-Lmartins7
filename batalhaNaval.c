#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    char* linha [10]={'A','B','C','D','E','F','G','H','I','J'};
    int tabuleiro [10][11]={
        { 1 , 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        { 2 , 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0},
        { 3 , 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        { 4 , 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0},
        { 5 , 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        { 6 , 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        { 7 , 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        { 8 , 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        { 9 , 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {10 , 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    };

    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
    tabuleiro[4][3]=3;
    tabuleiro[5][3]=3;
    tabuleiro[6][3]=3;
    tabuleiro[2][7]=3;
    tabuleiro[2][8]=3;
    tabuleiro[2][9]=3;
    tabuleiro[3][3]=3;
    tabuleiro[4][4]=3;
    tabuleiro[5][5]=3;
    tabuleiro[6][6]=3;
    tabuleiro[10][1]=3;
    tabuleiro[9][2]=3;
    tabuleiro[8][3]=3;
    tabuleiro[7][4]=3;
    printf("   %c %c %c %c %c %c %c %c %c %c\n", linha[0], linha[1], linha[2], linha[3], linha[4], linha[5], linha[6], linha[7], linha[8], linha[9]);
    for(int i=0 ; i<10 ; i++){
        for(int j=0 ; j<11 ; j++){
            printf("%2d", tabuleiro[i][j]);
    }printf("\n");
    } 
    printf("\n");

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    int cone [5][5]={0};
    int cruz [5][5]={0};

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            printf("%d",cone[i][j]);
        }
    }

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
