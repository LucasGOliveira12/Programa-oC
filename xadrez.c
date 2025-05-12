#include <stdio.h>

int main(){

    int b = 1, r = 1; // Iniciais de cada peça

    // Movimento da Torre 5 casas para a Direita
    printf("Movimento da Torre! \n");
    for (int t = 1; t <= 5; t++)
    {
        printf("Direita \n"); // Imprime a direção do movimento
    }
    
    // Movimento do Bispo 5 casas para a Cima, Direita
    printf("Movimento do Bispo! \n");
    while (b <= 5)
    {
        printf("Cima, Direita \n"); // Imprime a direção do movimento
        b++;
    }
    
    // Movimento da Rainha 8 casas para a Esquerda
    printf("Movimento da Rainha! \n");
    do
    {
        printf("Esquerda \n"); // Imprime a direção do movimento
        r++;
    } while (r <= 8);
    
    return 0;
}