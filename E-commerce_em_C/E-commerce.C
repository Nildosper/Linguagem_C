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

switch(op){
        case 1:
            printf("---------------------------------------------------------------------------------------------------------\n\n");
            printf("|                                                BRPETS                                                 |\n\n");
            printf("---------------------------------------------------------------------------------------------------------\n\n");
            printf("\n| A BRPet é uma empresa que surgiu para fazer a relação entre você e seu pet ser melhor a cada dia!     |\n");
	     printf("\n| Somos apaixonados por pets e , por isso, a nossa loja foi preparada e organizada para você encontrar  |\n"); 
            printf("\n| facilmente o que procura a qualquer hora e em qualquer lugar.                                         |\n");
	     printf("\n| Os nossos principais produtos são as PetBOX, uma maneira inovadora de ter todo mês na sua casa tudo   |\n");
            printf("\n| que seu pet precisa.                                                                                  |\n");   
	     printf("\n| Faça parte do nosso Clube Pet  e aproveite o que há de melhor no mundo pet!                           |\n");
            printf("---------------------------------------------------------------------------------------------------------\n\n");
            system("pause");
            system("cls");
            main();

            break;
        case 2:
            printf("Em contrução \n");

            system("pause");
            system("cls");
            main();

            break;
        case 3:
           printf("Em contrução \n");

           system("pause");
           system("cls");
           main();

            break;
        case 4:
            printf("Em contrução \n");

           system("pause");
           system("cls");
           main();

            break;
        case 5:
           printf("Em contrução \n");

           system("pause");
           system("cls");
           main();

            break;
        case 6:
            printf("Em contrução \n");

           system("pause");
           system("cls");
           main();

            break;
        case 0:
            exit(0);
        default:
            printf("Digite uma opção valida: \n");
            system("pause");
            system("cls");
            main();
    }
 

return 0;
// Retorna codificação padrão do Windows
  SetConsoleOutputCP(CPAGE_DEFAULT);
 }