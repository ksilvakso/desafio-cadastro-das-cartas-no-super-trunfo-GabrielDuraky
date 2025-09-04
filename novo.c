#include <stdio.h>
int main() 
{

// mover a torre 5 casas para a direita
for (int i = 0; i < 5; i++)
printf("direita\n"); // imprimir a direção do movimento    

// mover o bispo 5 casas na diagonal
for (int i = 0; i < 5; i++)
printf("cima, direita\n", i); // imprimir a direção do movimento

// mover a rainha 8 casas para a esquerda
for (int i = 0; i < 8; i++)
printf("esquerda \n", i); // imprimir a direção do movimento

// mover o cavalo 2 casa pra cima e 1 para direita
for (int i = 0; i < 2; i++)
printf("cima \n");
printf("direita \n");

}


