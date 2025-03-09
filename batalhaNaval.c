#include <stdio.h>

int main (){
    int tabuleiro[10][10];
    int i, j;
    char coluna = 'A';
    
    //código para atribuir o valor zero as posiçõs do tabuleiro
    for (i = 0; i < 10; i++){
        for (j = 0; j < 10; j++){
            tabuleiro[i][j] = 0;
        }
    }    
    
    // código para inserir o navio na posição horizontal fixando a linha e alternando a coluna
    for (j = 3; j <= 5; j++){
        tabuleiro[3][j] = 3;
    }
    
    // código para inserir o navio na posição vertical fixando a coluna e alternando a linha
    for (i = 5; i <= 7; i++){
        tabuleiro[i][0] = 3;
    }
    
    // código para determinar as colunas do tabuleiro de 'A' a 'H'
    printf("   ");
    for (i = 0; i < 10; i++){
        printf("%c ", coluna + i);
    }    
    printf("\n");
    
    //código para imprimir o tabuleiro
    for (i = 0; i < 10; i++){
        printf("%d- ", i); // imprime o número das linhas do tabuleiro
        for (j = 0; j < 10; j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    return 0;

}