// Desenvolvimento de calculadora para realizar cálculos de subtração
#include <stdio.h>
int main()
{
// Declaração de Variáveis
float numero1, numero2, resultado; 
// Entrada de dados
printf("Primeiro número: ");
scanf("%f", &numero1);//O %f é pra definir o tipo de dado, neste caso ‘float’- & comercial é para localizar a variável  
printf("Segundo número: ");
scanf("%f", &numero2);
// processamento de dados
resultado = numero1 - numero2; // O ‘=’ é um sinal de atribuição
// saída de dados
printf("\n Resultado da subtração: %.2f ",resultado); // \n é utilizado para mudar de linha e o 2 no ‘%2f’ é para definir o número de casas decimais 
return 0;
}
