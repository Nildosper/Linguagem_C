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
int op, opcao, opBox, opBoxCao,opBoxGato;
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
            printf("\n A BRPet é uma empresa que surgiu para fazer a relação entre você e seu pet ser melhor a cada dia!     \n");
	        printf("\n Somos apaixonados por pets e , por isso, a nossa loja foi preparada e organizada para você encontrar  \n"); 
            printf("\n facilmente o que procura a qualquer hora e em qualquer lugar.                                         \n");
	        printf("\n Os nossos principais produtos são as PetBOX, uma maneira inovadora de ter todo mês na sua casa tudo   \n");
            printf("\n que seu pet precisa.                                                                                  \n");   
	        printf("\n Faça parte do nosso Clube Pet  e aproveite o que há de melhor no mundo pet!                           \n");
            printf("---------------------------------------------------------------------------------------------------------\n\n");
            system("pause");
            system("cls");
            main();

            break;
        case 2:
            printf("---------------------------------------------------------------------------------------------------------\n");
            printf("|                                                BRPETS                                                 |\n");
            printf("---------------------------------------------------------------------------------------------------------\n");
            printf("| Clube Pet |                                                                                            \n");
            printf("-------------                                                                                            \n");
            printf("1 - Como funciona a PetBox                                                                               \n");
            printf("2 - Escolha a PetBOX ideal para o seu Pet                                                                \n");
            printf("Opção: ");
            scanf("%d", &opcao);
                if (opcao==1)
                {
                printf("---------------------------------------------------------------------------------------------------------\n");
                printf("| Como funciona a PetBox                                                                                |\n");
                printf("---------------------------------------------------------------------------------------------------------\n");
                printf("\n         No Clube Pet você recebe, todo mês, uma PetBOX com tudo que o seu bichinho precisa!         \n\n");
		        printf("\n                                 PASSOS PARA ADQUIRIR SUA PET BOX                                      \n");
		        printf("\n                                        1 - Você escolhe!                                              \n");
                printf("\n         São vários clubes diferentes, e você escolhe a PetBOX que mais combina com o seu pet.         \n");
		        printf("\n                                        2 - Nós selecionamos                                           \n"); 
                printf("\n  Nossos especialistas  se encarregam em selecionar os melhores produtos que farão parte de cada PetBOX\n");
		        printf("\n                                        3 - Comodidade                                                 \n");
                printf("\n                Todo mês, você recebe a sua PetBOX no conforto da sua casa.                            \n");
		        printf("\n                                        4 - Aproveite                                                  \n");
                printf("\n                            O seu bichinho com o melhor do mundo Pet!                                  \n");

                printf("--------------------------------------------------------------------------------------------------------\n\n");
                system("pause");
                system("cls");
                main();             
                }
                else if (opcao==2)
                    {
                    printf("--------------------------------------------------------------------------------------------------------\n");
                    printf("| Escolha a PetBOX ideal para o seu Pet                                                                |\n");
                    printf("--------------------------------------------------------------------------------------------------------\n");
                    printf("1 - PetBox para Cachoros                                                                                \n");
                    printf("2 - PetBox para gatos                                                                                   \n");
                    printf("Opção: ");
                    scanf("%d", &opBox);              
                    }             
                 else 
                    {
                    printf("Número inválido\n");
                    printf("--------------------------------------------------------------------------------------------------------\n\n");
                    system("pause");
                    system("cls");
                    main();
                    }          
                if (opBox==1)
                {
                printf("--------------------------------------------------------------------------------------------------------\n");
                printf("| PetBox para Cachoros                                                                                 |\n");
                printf("--------------------------------------------------------------------------------------------------------\n");
                printf("PetBox para filhotes                                                                                    \n");
                printf("1 - Standard                                                                                            \n");
                printf("2 - Premium                                                                                             \n");
                printf("3 - Super Premium                                                                                       \n");
                printf("Opção: ");
                scanf("%d", &opBoxCao); 
                }
                else if (opBox==2)
                {
                printf("--------------------------------------------------------------------------------------------------------\n");
                printf("| PetBox para gatos                                                                                    |\n");
                printf("--------------------------------------------------------------------------------------------------------\n");
                printf("PetBox para filhotes                                                                                    \n");
                printf("1 - Standard                                                                                            \n");
                printf("2 - Premium                                                                                             \n");
                printf("3 - Super Premium                                                                                       \n");
                printf("Opção: ");
                scanf("%d", &opBoxGato); 
                }
                else 
                {
                printf("Número inválido\n");
                printf("--------------------------------------------------------------------------------------------------------\n\n");
                system("pause");
                system("cls");
                main();  
                }         
                            
                          
                    

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