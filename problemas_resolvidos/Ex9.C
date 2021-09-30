//Trabalhando com estrutura condicional encadeada
//Programa que calcula um aumento salarial de acordo com o o salario atual do funcionário 
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
float sal, aumento, novoSal, valorAum;
//Entrada de dados 
printf("Salário..: R$ ");
scanf("%f", &sal);
//Processamento
if (sal <1000.00)
{
aumento = 15;
}
    else if (sal < 2000.00)
    {
   aumento =10;
    }
        else if (sal < 3000.00)
        {
        aumento = 5;
        }
            else
            {
            aumento = 0;
                }
valorAum = sal * aumento /100;
novoSal = sal + valorAum;
//Saída de dados
printf("\n------------------------------------------------------------------------");
printf("\nValor do Aumento..: R$ %.2f" , valorAum);
printf("\nValor do novo salário..: R$ %.2f \n" , novoSal);
system("pause");
return 0;
// Retorna codificação padrão do Windows
  SetConsoleOutputCP(CPAGE_DEFAULT);
}