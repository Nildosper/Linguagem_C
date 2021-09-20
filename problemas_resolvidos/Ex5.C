// Programa que recebe o salário fixo de um funcionário, o valor de suas vendas e calcula a comissão (4%) sobre as vendas e seu salário final 
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main()
{setlocale(LC_ALL, "Portuguese");

// Declaração de Variáveis
float salFixo, vendas, comissao, salFinal ; 
// Entrada de dados
printf("------------------------------------------Salario-----------------------------------------------------\n");
printf("Digite o valor do seu salario:  ");
scanf("%f", &salFixo); 
printf("Digite o valor de suas vendas:  ");
scanf("%f", &vendas);
// processamento de dados
comissao = vendas*0.04;
salFinal=comissao+salFixo;
// saída de dados
printf("\nO valor da comissao e: %2.f \n", comissao);
printf("\nO seu salario final e: %2.f \n", salFinal);
system("pause");
return 0;
}