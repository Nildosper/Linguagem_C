/*Programa que que retorna o nome do mês de acordo com o número digitado pelo usuário*/
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
int mes;
// entrada de dados
printf("Digite o número do mês: ");
scanf("%d", &mes);
// processamento
    switch (mes)
    {
        case 1:  // if (mes == 1)
                printf("Janeiro\n");  // saída de dados
                break;
        case 2: 
               printf("Fevereiro\n"); // saída de dados
               break;
        case 3: 
               printf("Março\n"); // saída de dados
               break;
        case 4: 
               printf("Abril\n"); // saída de dados
               break;
        case 5: 
               printf("Maio\n"); // saída de dados
               break;
        case 6: 
               printf("Junho\n"); // saída de dados
               break;
        case 7: 
               printf("Julho\n"); // saída de dados
               break;
        case 8: 
               printf("Agosto\n"); // saída de dados
               break;
        case 9: 
               printf("Setembro\n"); // saída de dados
               break;
        case 10: 
               printf("Outubro\n"); // saída de dados
               break;       
        case 11: 
               printf("Novembro\n"); // saída de dados
               break;
        case 12: 
               printf("Dezembro\n"); // saída de dados
               break;       
        default: // se não for nenhuma das opções (case)
               printf("Número inválido\n");
               system("pause");
               system("cls");
               main(); 
    }
return 0;
// Retorna codificação padrão do Windows
  SetConsoleOutputCP(CPAGE_DEFAULT);
 }