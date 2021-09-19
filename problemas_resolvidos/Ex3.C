// Programa que recebe o preço de um produto e calcula um desconto de 10% 
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main()
{setlocale(LC_ALL, "Portuguese");
// Declaração de Variáveis
float preco, novoPreco; 
// Entrada de dados
printf("Preco do produto: ");
scanf("%f", &preco); 
// processamento de dados
novoPreco =preco*0.9;
// saída de dados
printf("\nNovo preco: %.2f \n", novoPreco);
system("pause");
return 0;
}