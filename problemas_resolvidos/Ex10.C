//Trabalhando com estrutura condicional encadeada
//Programa que calcula a comissão de acordo com as vendas 
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
float vendas, comissao;
//Entrada de dados 
printf("Qual o valor das vendas?: R$ ");
scanf("%f", &vendas);
//Processamento
if (vendas<=3000)
{
    comissao=5;
}
    else if (vendas <=5000)
    {
        comissao=8;
    }
        else if (vendas <=7000)
        {
            comissao=10;
        }
            else 
            {
                comissao=15;
            }
comissao = vendas * comissao/100;
//Saída de dados
printf("\n------------------------------------------------------------------------");
printf("\nValor da comissão: R$ %.2f" , comissao);
system("pause");
return 0;
// Retorna codificação padrão do Windows
  SetConsoleOutputCP(CPAGE_DEFAULT);
 }
