// Desenvolvimento de calculadora para realizar cálculos de subtração
#include <stdio.h>
#include <locale.h>
#include <stdlib.h> //para da dar uma pausa na hora da execução (system pause)
int main()
{setlocale(LC_ALL, "Portuguese");
// Declaração de Variáveis
float numero1, numero2, resultado; 
// Entrada de dados
printf("------------------------------------------Realize sua conta de subtracao-----------------------------------------------------\n");
printf("Primeiro numero: ");
scanf("%f", &numero1);//O %f é pra definir o tipo de dado, neste caso ‘float’- & comercial é para localizar a variável  
printf("Segundo numero: ");
scanf("%f", &numero2);
// processamento de dados
resultado = numero1 - numero2; // O ‘=’ é um sinal de atribuição
// saída de dados
printf("\nResultado da subtracao: %.2f\n",resultado); // \n é utilizado para mudar de linha e o 2 no ‘%2f’ é para definir o número de casas decimais 
system("pause");
return 0;
}
