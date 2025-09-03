#include <stdio.h>
int main() 
{
// mover a torre 5 casas para a direita
for (int i = 0; i < 5; i++)
printf("direita\n"); // imprimir a direção do movimento

// mover o bispo 5 casas na diagonal
int i = 1;
while (i <= 5) {
printf("cima, direita\n", i); // imprimir a direção do movimento
i++;
}

// mover a rainha 8 casas para a esquerda
int i = 1;
do {
printf("esquerda \n", i); // imprimir a direção do movimento
i++;
} while (i <= 5);
printf("novo commit\n");

}