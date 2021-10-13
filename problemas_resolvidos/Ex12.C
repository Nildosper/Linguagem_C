//Trabalhando com estrutura condicional encadeada
/*Programa que calcula o preço final de um produto com base em seu preço inicial (<=25; >25), 
categoria (1-limpeza, 2-Alimentação e 3- vestuário) e 
situação (1- Produtos que necessitam de refrigeração  2- Produtos que não necessitam de refrigeração)*/
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
float preco, aumento;
int categoria, situacao;
//Entrada de dados
printf("-------------------------------------------------------------------------------");
printf("\nPreço do Produto: ");
scanf ("%f", &preco);
printf("Categoria: \n1- Limpeza \n2- Alimentação \n3- Vestuário \nCategoria escolhida: ");
scanf("%d", &categoria);
printf("Situação: \n1 - Produtos que necessitam de refrigeração  \n2- Produtos que não necessitam de refrigeração  \nSituação escolhida: ");
scanf("%d", &situacao);
//Processamento
printf("-------------------------------------------------------------------------------\n");
if (preco<=25)
{

}
  else if (categoria==1)
  {
    aumento=preco*0.05;
  }
    else if (categoria==2)
    {
      aumento=preco*0.08;
    }
      else 
      {
        aumento=preco*0.10;
      }
else
{
}
else if (categoria==1)
  {
    aumento=preco*0.12;
  }
    else if (categoria==2)
    {
      aumento=preco*0.15;
    }
      else 
      {
        aumento=preco*0.18;
      }





system("pause");
return 0;
// Retorna codificação padrão do Windows
  SetConsoleOutputCP(CPAGE_DEFAULT);
 }