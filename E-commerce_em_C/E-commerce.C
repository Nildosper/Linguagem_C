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
int op;
// entrada de dados
//boas vindas
printf("---------------------------------------------------------------------------------------------------------\n\n");
printf("|                                            Bem-vindo a BRPETS                                         |\n\n");
printf("---------------------------------------------------------------------------------------------------------\n\n");

printf("1 - Conheça a BRPets\n");
printf("2 - Clube Pet\n");
printf("3 - Loja\n");
printf("4 - Ofertas\n");
printf("5 - Busca\n");
printf("6 - Carinho\n");
printf("0 - Sair do site\n");
printf("Opção: ");
scanf("%d", &op);




return 0;
// Retorna codificação padrão do Windows
  SetConsoleOutputCP(CPAGE_DEFAULT);
 }