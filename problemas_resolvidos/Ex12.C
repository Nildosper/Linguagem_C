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
float preco, aumento, imposto, novoPreco;
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
if (preco<=25 && categoria==1)
  {
  aumento=preco*0.05;
  }
  else if (preco<=25 && categoria==2)
    {
      aumento=preco*0.08;
    }
    else if (preco<=25 && categoria==3)
      {
        aumento=preco*0.10;
      }
      else if (preco > 25 && categoria==1)
       {
        aumento=preco*0.12;
       }
        else if (preco > 25 && categoria==2)
          {
           aumento=preco*0.15;
          }
            else if (preco > 25 && categoria==3) 
              {
              aumento=preco*0.18;
              }

//calculando o valor do imposto
 if (categoria == 2 || situacao == 1)
{
  imposto = preco * 0.05;
}
  else
  {
     imposto= preco * 0.08;
  }     
// calculando o novo preço – preço + aumento + imposto
novoPreco = preco + aumento + imposto;
//Saída de dados - Valor do aumento, imposto e do novo preço
printf("\nValor do aumento: R$ %.2f ", aumento);
printf("\nValor do imposto: R$ %.2f", imposto);
printf("\nNovo preço: R$ %.2f \n", novoPreco);
system("pause");
return 0;
// Retorna codificação padrão do Windows
  SetConsoleOutputCP(CPAGE_DEFAULT);
 }