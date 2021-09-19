// Multiplicação de três números fornecidos pelo usuário
#include <stdio.h>
#include <locale.h>
int main()
{setlocale(LC_ALL, "Portuguese");

// Declaração de Variáveis
float n1, n2, n3, resultado; 
// Entrada de dados
printf("------------------------------------------Realize sua multiplicacao-----------------------------------------------------\n");
printf("Primeiro numero:  ");
scanf("%f", &n1); 
printf("Segundo numero:  ");
scanf("%f", &n2);
printf("Terceiro numero:  ");
scanf("%f", &n3);
// processamento de dados
resultado = n1*n2*n3;
// saída de dados
printf("\nO valor da multiplicacao e: %2.f", resultado);
return 0;
}