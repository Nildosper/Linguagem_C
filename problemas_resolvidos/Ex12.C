/Trabalhando com estrutura condicional encadeada
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
float custoFabrica, alicotaDistribuidor, alicotaImposto;
//Entrada de dados
printf("-------------------------------------------------------------------------------");
printf("\nInforme o preço de fábrica..: R$ ");
scanf("%f", &custoFabrica);
//Processamento
printf("-------------------------------------------------------------------------------");
if (custoFabrica > 25000)
{
    alicotaDistribuidor = 0.15; alicotaImposto = 0.20;
}
        else if (custoFabrica > 12000)
        {
            alicotaDistribuidor = 0.10; alicotaImposto = 0.15;
        }
            else
            {
                alicotaDistribuidor = 0.05; alicotaImposto = 0.0;
            }
printf("\nO preço ao consumidor será R$ %.2f \n",((custoFabrica)+(custoFabrica*alicotaDistribuidor)+(custoFabrica*alicotaImposto)));
system("pause");
return 0;
// Retorna codificação padrão do Windows
  SetConsoleOutputCP(CPAGE_DEFAULT);
 }