// Programa que calcula a média ponderada de duas notas fornecidas pelo usuário, sendo que a primeira tem peso 2 e a segunda peso 3 
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main()
{setlocale(LC_ALL, "Portuguese");
// Declaração de Variáveis
float n1, n2, resultado; 
// Entrada de dados
printf("Nota 1:");
scanf("%f", &n1); 
printf("Nota 2:");
scanf("%f", &n2);
// processamento de dados
resultado = (n1*0.2) + (n2*0.3)/2;
// saída de dados
printf("\nMedia: %.2f \n", resultado);
system("pause");
return 0;
}