//Programa que calcula o salário mais a comissão de um funcionário de acordo com seu volume de venda 
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main()
{
// Define o valor das páginas de código UTF8 e default do Windows
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
// Define codificação como sendo UTF-8
  SetConsoleOutputCP(CPAGE_UTF8);
// declaração de variáveis
float salFixo, vendas, comissao, salFinal;   // declaração de variáveis
// entrada de dados
    printf("---------------------------------------------------");
    printf("\nSalario Fixo..: R$ ");
    scanf("%f", &salFixo); 
    printf("Valor das Vendas..: R$ ");
    scanf("%f", &vendas);
//Processamento de dados
    if (vendas <= 3000.00)
      {
          comissao = 5;
      }
      else 
      {
          comissao = 8;
      }
    salFinal = salFixo + (vendas * comissao / 100);
// Saída de dados
    printf("---------------- Resultado -----------------------");
    printf("\nValor do salario final..: R$ %.2f \n", salFinal);
system("pause");
return 0;
// Retorna codificação padrão do Windows
  SetConsoleOutputCP(CPAGE_DEFAULT);
}