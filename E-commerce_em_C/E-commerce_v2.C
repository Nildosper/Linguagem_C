#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int clubepet();
// declaração de variáveis globais
int op, opcao, opBox, opBoxCao,opBoxGato, categoriaCaoFilhotes, categoriaCaoAdultos, categoriaCaoIdosos, tamanhoBoxCaoFilhotes1, tamanhoBoxCaoFilhotes2, tamanhoBoxCaoFilhotes3, tamanhoBoxCaoAdultos1, tamanhoBoxCaoAdultos2, tamanhoBoxCaoAdultos3, tamanhoBoxCaoIdosos1, tamanhoBoxCaoIdosos2, tamanhoBoxCaoIdosos3;


int main()
{
// Define o valor das páginas de código UTF8 e default do Windows
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
// Define codificação como sendo UTF-8
  SetConsoleOutputCP(CPAGE_UTF8);
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
printf("\nOpção: ");
scanf("%d", &op);

switch(op){
        case 1:
            printf("\n---------------------------------------------------------------------------------------------------------\n\n");
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
    		clubepet(); //chama função clubepet 
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
 
 
//função clubepet 
int clubepet()
{
	        printf("\n---------------------------------------------------------------------------------------------------------\n");
            printf("|                                                BRPETS                                                 |\n");
            printf("---------------------------------------------------------------------------------------------------------\n");
            printf("| Clube Pet |                                                                                            \n");
            printf("-------------                                                                                            \n");
            printf("1 - Como funciona a PetBox                                                                               \n");
            printf("2 - Escolha a PetBOX ideal para o seu Pet                                                                \n");
            printf("3 - Voltar ao menu                                                                                       \n");
            printf("\nOpção: ");
            scanf("%d", &opcao);
                if (opcao==1)
                {
                printf("\n---------------------------------------------------------------------------------------------------------\n");
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
                clubepet();             
                }
                else if (opcao==2)
                    {
                    printf("\n--------------------------------------------------------------------------------------------------------\n");
                    printf("| Escolha a PetBOX ideal para o seu Pet                                                                |\n");
                    printf("--------------------------------------------------------------------------------------------------------\n");
                    printf("1 - PetBox para Cachoros                                                                                \n");
                    printf("2 - PetBox para gatos                                                                                   \n");
                    printf("\nOpção: ");
                    scanf("%d", &opBox);              
                    }             
                 else if (opcao==3)
                 	{
                 	system("cls");
                 	main();
                 	}
                 else
                    {
                    printf("\nNúmero inválido\n");
                    printf("--------------------------------------------------------------------------------------------------------\n\n");
                    system("pause");
                    system("cls");
                    clubepet();
                    }          
                if (opBox==1)
                {
                printf("\n--------------------------------------------------------------------------------------------------------\n");
                printf("| PetBox para Cachoros                                                                                 |\n");
                printf("--------------------------------------------------------------------------------------------------------\n");
                printf("\n1 - PetBox para filhotes                                                                              \n");
                printf("\nIdeal para seu Pet entre 40 dias e 1 ano vida!                                                       \n");
                printf("\n2 - PetBox para adultos                                                                               \n");
                printf("\nIdeal para seu Pet entre 1 a 7 anos de vida!                                                            \n");
                printf("\n3 - PetBox para idosos                                                                                \n");
                printf("\nIdeal para seu Pet com mais de 7 (grande porte) e 12 (pequeno porte) anos de vida!                    \n");
                printf("\nOpção: ");
                scanf("%d", &opBoxCao); 
                }
                else if (opBox==2)
                {
                printf("\n--------------------------------------------------------------------------------------------------------\n");
                printf("| PetBox para gatos                                                                                    |\n");
                printf("--------------------------------------------------------------------------------------------------------\n");
                printf("1 - PetBox para filhotes                                                                                \n");
                printf("2 - PetBox para adultos                                                                                 \n");
                printf("3 - PetBox para idosos                                                                                  \n");
                printf("\nOpção: ");
                scanf("%d", &opBoxGato); 
                }
                else 
                {
                printf("\nNúmero inválido\n");
                printf("--------------------------------------------------------------------------------------------------------\n\n");
                system("pause");
                system("cls");
                clubepet();  
                }         
                                   
                if (opBoxCao==1)
                {
                printf("\n----------------------------------------------------------------------------------------------------------\n");
                printf("| PetBox para filhotes                                                                                   |\n");
                printf("----------------------------------------------------------------------------------------------------------\n");
                printf("\n1 -- Standard --                                                                                       \n");
                printf("\nAcompanha ração balanceada com proteínas de boa qualidade preparadas por empresas de renome no mercado \n");
                printf("\nNa composição da ração você encontrar farinha de carne, gordura animal, glúten  e outros ingredientes  \n");
                printf("\n2 -- Premium --                                                                                        \n");
                printf("\nAcompanha rações de primeira qualidade ricas em proteínas de alta digestibilidade, as quais            \n");         
                printf("\nproporcionaram um melhor funcionamento do organismo do seu Pet.                                        \n");
                printf("\n3 -- Super Premium  --                                                                                 \n");
                printf("\nAcompanha rações 100 de origem animal. Além disso, todos os conservantes utilizados são de origem      \n");
                printf("\nnatural. O seu cão com o melhor do mundo Pet!                                                          \n");
                printf("\nOpção: ");
                scanf("%d", &categoriaCaoFilhotes); 
                
                }
                    else if (opBoxCao==2)
                    {
                    printf("\n----------------------------------------------------------------------------------------------------------\n");
                    printf("| PetBox para Adultos                                                                                    |\n");
                    printf("----------------------------------------------------------------------------------------------------------\n");
                    printf("\n1 -- Standard --                                                                                       \n");
                    printf("\nAcompanha ração balanceada com proteínas de boa qualidade preparadas por empresas de renome no mercado \n");
                    printf("\nNa composição da ração você encontrar farinha de carne, gordura animal, glúten  e outros ingredientes  \n");
                    printf("\n2 -- Premium --                                                                                        \n");
                    printf("\nAcompanha rações de primeira qualidade ricas em proteínas de alta digestibilidade, as quais            \n");         
                    printf("\nproporcionaram um melhor funcionamento do organismo do seu Pet.                                        \n");
                    printf("\n3 -- Super Premium  --                                                                                 \n");
                    printf("\nAcompanha rações 100 de origem animal. Além disso, todos os conservantes utilizados são de origem      \n");
                    printf("\nnatural. O seu cão com o melhor do mundo Pet!                                                          \n");
                    printf("\nOpção: ");
                     scanf("%d", &categoriaCaoAdultos);
                    }   
                        else if (opBoxCao==3)    
                        {
                        printf("\n----------------------------------------------------------------------------------------------------------\n");
                        printf("| PetBox para Idosos                                                                                     |\n");
                        printf("----------------------------------------------------------------------------------------------------------\n");
                        printf("\n1 -- Standard --                                                                                       \n");
                        printf("\nAcompanha ração balanceada com proteínas de boa qualidade preparadas por empresas de renome no mercado \n");
                        printf("\nNa composição da ração você encontrar farinha de carne, gordura animal, glúten  e outros ingredientes  \n");
                        printf("\n2 -- Premium --                                                                                        \n");
                        printf("\nAcompanha rações de primeira qualidade ricas em proteínas de alta digestibilidade, as quais            \n");         
                        printf("\nproporcionaram um melhor funcionamento do organismo do seu Pet.                                        \n");
                        printf("\n3 -- Super Premium  --                                                                                 \n");
                        printf("\nAcompanha rações 100 de origem animal. Além disso, todos os conservantes utilizados são de origem      \n");
                        printf("\nnatural. O seu cão com o melhor do mundo Pet!                                                          \n");
                        printf("\nOpção: ");
                        scanf("%d", &categoriaCaoIdosos);
                        }  
                            else 
                             {
                             printf("\nNúmero inválido\n");
                             printf("--------------------------------------------------------------------------------------------------------\n\n");
                             system("pause");
                             system("cls");
                             clubepet();  
                             } 
                if (categoriaCaoFilhotes==1)
                {
                printf("\n--------------------------------------------------------------------------------------------------------\n");
                printf("| PetBox para filhotes                                                                                   |\n");
                printf("----------------------------------------------------------------------------------------------------------\n");
                printf("| 1 - Standard |                                                                                        \n");
                printf("----------------                                                                                        \n");
		        printf("\nAcompanha ração balanceada com proteínas de boa qualidade preparadas por empresas de renome no mercado\n");
                printf("\nNa composição da ração você encontrar farinha de carne, gordura animal, glúten  e outros ingredientes \n");
                printf("\n--------------------------------------------TAMANHOS ---------------------------------------------------\n\n");
                printf("--------------------------------------------------------------------------------------------------------\n");
                printf("|     PetBOX: Pequeno      |--------|      PetBOX: Médio      |--------|     PetBOX: Grande      |------\n");
                printf("|      Plano mensal        |--------|      Plano mensal       |--------|      Plano mensal       |------\n");
                printf("|      R$ 69,90/mês        |--------|      R$ 99,90/mês       |--------|     R$ 119,90/mês       |------\n");
                printf("|       Plano anual        |--------|      Plano anual        |--------|      Plano anual        |------\n");
                printf("|      R$ 59,90/mês        |--------|      R$ 89,90/mês       |--------|     R$ 109,90/mês       |------\n");
                printf("--------------------------------------------------------------------------------------------------------\n");
                printf("|Itens:                    |--------|Itens:                   |--------|Itens:                   |------\n");
                printf("|-Ração standard (1 kg)    |--------|-Ração standard (2 kg)   |--------|-Ração standard (3 kg)   |------\n");
                printf("|-Petiscos (2 un)          |--------|-Petiscos (3 un)         |--------|-Petiscos (4 un)         |------\n");
                printf("|-Brinquedo (1 un)         |--------|-Brinquedo (1 un)        |--------|-Brinquedo (1 un)        |------\n");
                printf("|-Tapete higiênico (10 un) |--------|-Tapete higiênico (15 un)|--------|-Tapete higiênico (15 un)|------\n");
                printf("|-Sabonete (2 un)          |--------|-Sabonete (2 un)         |--------|-Sabonete (2 un)         |------\n");
                printf("|                          |--------|-Kit de Shampoo, Colônia |--------|-Kit de Shampoo, Colônia |------\n");
                printf("|                          |--------|  e Condicionador (1 un) |--------| e Condicionador (1 un)  |------\n");
                printf("|                          |--------|                         |--------|-Kit dental (1 un)       |------\n");
                printf("--------------------------------------------------------------------------------------------------------\n");
                printf("\n\nEscolha o tamanho da sua PetBox                                                                     \n");
                printf("1 - Pequeno                                                                                             \n");
                printf("2 - Médio                                                                                               \n");
                printf("3 - Grande                                                                                              \n");
                printf("Opção: ");
                scanf("%d", &tamanhoBoxCaoFilhotes1);
               

                }
                    else if (categoriaCaoFilhotes==2)
                    {
                    printf("----------------------------------------------------------------------------------------------------------\n");
                    printf("| PetBox para filhotes                                                                                   |\n");
                    printf("----------------------------------------------------------------------------------------------------------\n");
                    printf("| 2 - Premium  |                                                                                        \n");
                    printf("----------------                                                                                        \n");
                    printf("\n    Acompanha rações de primeira qualidade ricas em proteínas de alta digestibilidade, as quais       \n");         
                    printf("\n               proporcionaram um melhor funcionamento do organismo do seu Pet.                         \n");
                    printf("\n--------------------------------------------TAMANHOS ---------------------------------------------------\n\n");
                    printf("--------------------------------------------------------------------------------------------------------\n");
                    printf("|     PetBOX: Pequeno      |--------|      PetBOX: Médio      |--------|     PetBOX: Grande      |------\n");
                    printf("|      Plano mensal        |--------|      Plano mensal       |--------|      Plano mensal       |------\n");
                    printf("|      R$ 89,90/mês        |--------|      R$ 119,90/mês      |--------|     R$ 149,90/mês       |------\n");
                    printf("|       Plano anual        |--------|      Plano anual        |--------|      Plano anual        |------\n");
                    printf("|      R$ 79,90/mês        |--------|      R$ 109,90/mês      |--------|     R$ 139,90/mês       |------\n");
                    printf("--------------------------------------------------------------------------------------------------------\n");
                    printf("|Itens:                    |--------|Itens:                   |--------|Itens:                   |------\n");
                    printf("|-Ração premium  (1 kg)    |--------|-Ração premium  (2 kg)   |--------|-Ração premium  (3  kg)  |------\n");
                    printf("|-Petiscos (2 un)          |--------|-Petiscos (3 un)         |--------|-Petiscos (4 un)         |------\n");
                    printf("|-Brinquedo (1 un)         |--------|-Brinquedo (1 un)        |--------|-Brinquedo (1 un)        |------\n");
                    printf("|-Tapete higiênico (10 un) |--------|-Tapete higiênico (15 un)|--------|-Tapete higiênico (15 un)|------\n");
                    printf("|-Sabonete (2 un)          |--------|-Sabonete (2 un)         |--------|-Sabonete (2 un)         |------\n");
                    printf("|                          |--------|-Kit de Shampoo, Colônia |--------|-Kit de Shampoo, Colônia |------\n");
                    printf("|                          |--------|  e Condicionador (1 un) |--------| e Condicionador (1 un)  |------\n");
                    printf("|                          |--------|                         |--------|-Kit dental (1 un)       |------\n");
                    printf("--------------------------------------------------------------------------------------------------------\n");
                    printf("\n\nEscolha o tamanho da sua PetBox                                                                     \n");
                    printf("1 - Pequeno                                                                                             \n");
                    printf("3 - Médio                                                                                               \n");
                    printf("3 - Grande                                                                                              \n");
                    printf("\nOpção: ");
                    scanf("%d", &tamanhoBoxCaoFilhotes2);
                    }
                        else if (categoriaCaoFilhotes==3)
                        {
                        printf("----------------------------------------------------------------------------------------------------------\n");
                        printf("| PetBox para filhotes                                                                                   |\n");
                        printf("----------------------------------------------------------------------------------------------------------\n");
                        printf("| 3 - Super Premium  |                                                                                  \n");
                        printf("----------------------                                                                                  \n");
                        printf("\n  Acompanha rações 100 de origem animal. Além disso, todos os conservantes utilizados são de origem   \n");
                        printf("\n                     natural. O seu cão com o melhor do mundo Pet!                                    \n");
                        printf("\n--------------------------------------------TAMANHOS ---------------------------------------------------\n\n");
                        printf("--------------------------------------------------------------------------------------------------------\n");
                        printf("|     PetBOX: Pequeno      |--------|      PetBOX: Médio      |--------|     PetBOX: Grande      |------\n");
                        printf("|      Plano mensal        |--------|      Plano mensal       |--------|      Plano mensal       |------\n");
                        printf("|      R$ 99,90/mês        |--------|      R$ 129,90/mês      |--------|     R$ 169,90/mês       |------\n");
                        printf("|       Plano anual        |--------|      Plano anual        |--------|      Plano anual        |------\n");
                        printf("|      R$ 89,90/mês        |--------|      R$ 119,90/mês      |--------|     R$ 159,90/mês       |------\n");
                        printf("--------------------------------------------------------------------------------------------------------\n");
                        printf("|Itens:                    |--------|Itens:                   |--------|Itens:                   |------\n");
                        printf("|-Ração premium  (5 kg)    |--------|-Ração premium  (8 kg)   |--------|-Ração premium  (12 kg)  |------\n");
                        printf("|-Petiscos (2 un)          |--------|-Petiscos (3 un)         |--------|-Petiscos (4 un)         |------\n");
                        printf("|-Brinquedo (1 un)         |--------|-Brinquedo (1 un)        |--------|-Brinquedo (1 un)        |------\n");
                        printf("|-Tapete higiênico (10 un) |--------|-Tapete higiênico (15 un)|--------|-Tapete higiênico (15 un)|------\n");
                        printf("|-Sabonete (2 un)          |--------|-Sabonete (2 un)         |--------|-Sabonete (2 un)         |------\n");
                        printf("|                          |--------|-Kit de Shampoo, Colônia |--------|-Kit de Shampoo, Colônia |------\n");
                        printf("|                          |--------|  e Condicionador (1 un) |--------| e Condicionador (1 un)  |------\n");
                        printf("|                          |--------|                         |--------|-Kit dental (1 un)       |------\n");
                        printf("--------------------------------------------------------------------------------------------------------\n");
                        printf("\n\nEscolha o tamanho da sua PetBox                                                                     \n");
                        printf("1 - Pequeno                                                                                             \n");
                        printf("2 - Médio                                                                                               \n");
                        printf("3 - Grande                                                                                              \n");
                        printf("\nOpção: ");
                        scanf("%d", &tamanhoBoxCaoFilhotes3);
                        }
                            

                else if (categoriaCaoAdultos==1)
                {
                printf("----------------------------------------------------------------------------------------------------------\n");
                printf("| PetBox para Adultos                                                                                    |\n");
                printf("----------------------------------------------------------------------------------------------------------\n");
                printf("| 1 - Standard |                                                                                        \n");
                printf("----------------                                                                                        \n");
		        printf("\nAcompanha ração balanceada com proteínas de boa qualidade preparadas por empresas de renome no mercado\n");
                printf("\nNa composição da ração você encontrar farinha de carne, gordura animal, glúten  e outros ingredientes \n");
                printf("\n--------------------------------------------TAMANHOS ---------------------------------------------------\n\n");
                printf("--------------------------------------------------------------------------------------------------------\n");
                printf("|     PetBOX: Pequeno      |--------|      PetBOX: Médio      |--------|     PetBOX: Grande      |------\n");
                printf("|      Plano mensal        |--------|      Plano mensal       |--------|      Plano mensal       |------\n");
                printf("|      R$ 89,90/mês        |--------|      R$ 129,90/mês      |--------|     R$ 159,90/mês       |------\n");
                printf("|       Plano anual        |--------|      Plano anual        |--------|      Plano anual        |------\n");
                printf("|      R$ 79,90/mês        |--------|      R$ 119,90/mês      |--------|     R$ 149,90/mês       |------\n");
                printf("--------------------------------------------------------------------------------------------------------\n");
                printf("|Itens:                    |--------|Itens:                   |--------|Itens:                   |------\n");
                printf("|-Ração standard (5 kg)    |--------|-Ração standard (8 kg)   |--------|-Ração standard (12 kg)  |------\n");
                printf("|-Petiscos (2 un)          |--------|-Petiscos (3 un)         |--------|-Petiscos (4 un)         |------\n");
                printf("|-Brinquedo (1 un)         |--------|-Brinquedo (1 un)        |--------|-Brinquedo (1 un)        |------\n");
                printf("|-Tapete higiênico (10 un) |--------|-Tapete higiênico (15 un)|--------|-Tapete higiênico (15 un)|------\n");
                printf("|-Sabonete (2 un)          |--------|-Sabonete (2 un)         |--------|-Sabonete (2 un)         |------\n");
                printf("|                          |--------|-Kit de Shampoo, Colônia |--------|-Kit de Shampoo, Colônia |------\n");
                printf("|                          |--------|  e Condicionador (1 un) |--------| e Condicionador (1 un)  |------\n");
                printf("|                          |--------|                         |--------|-Kit dental (1 un)       |------\n");
                printf("--------------------------------------------------------------------------------------------------------\n");
                printf("\n\nEscolha o tamanho da sua PetBox                                                                     \n");
                printf("1 - Pequeno                                                                                             \n");
                printf("2 - Médio                                                                                               \n");
                printf("3 - Grande                                                                                              \n");
                printf("Opção: ");
                scanf("%d", &tamanhoBoxCaoAdultos1);
               

                }
                    else if (categoriaCaoAdultos==2)
                    {
                    printf("----------------------------------------------------------------------------------------------------------\n");
                    printf("| PetBox para Adultos                                                                                    |\n");
                    printf("----------------------------------------------------------------------------------------------------------\n");
                    printf("| 2 - Premium  |                                                                                        \n");
                    printf("----------------                                                                                        \n");
                    printf("\n    Acompanha rações de primeira qualidade ricas em proteínas de alta digestibilidade, as quais       \n");         
                    printf("\n               proporcionaram um melhor funcionamento do organismo do seu Pet.                         \n");
                    printf("\n--------------------------------------------TAMANHOS ---------------------------------------------------\n\n");
                    printf("--------------------------------------------------------------------------------------------------------\n");
                    printf("|     PetBOX: Pequeno      |--------|      PetBOX: Médio      |--------|     PetBOX: Grande      |------\n");
                    printf("|      Plano mensal        |--------|      Plano mensal       |--------|      Plano mensal       |------\n");
                    printf("|      R$ 99,90/mês        |--------|      R$ 149,90/mês      |--------|     R$ 179,90/mês       |------\n");
                    printf("|       Plano anual        |--------|      Plano anual        |--------|      Plano anual        |------\n");
                    printf("|      R$ 89,90/mês        |--------|      R$ 139,90/mês      |--------|     R$ 169,90/mês       |------\n");
                    printf("--------------------------------------------------------------------------------------------------------\n");
                    printf("|Itens:                    |--------|Itens:                   |--------|Itens:                   |------\n");
                    printf("|-Ração premium  (1 kg)    |--------|-Ração premium  (2 kg)   |--------|-Ração premium  (3  kg)  |------\n");
                    printf("|-Petiscos (2 un)          |--------|-Petiscos (3 un)         |--------|-Petiscos (4 un)         |------\n");
                    printf("|-Brinquedo (1 un)         |--------|-Brinquedo (1 un)        |--------|-Brinquedo (1 un)        |------\n");
                    printf("|-Tapete higiênico (10 un) |--------|-Tapete higiênico (15 un)|--------|-Tapete higiênico (15 un)|------\n");
                    printf("|-Sabonete (2 un)          |--------|-Sabonete (2 un)         |--------|-Sabonete (2 un)         |------\n");
                    printf("|                          |--------|-Kit de Shampoo, Colônia |--------|-Kit de Shampoo, Colônia |------\n");
                    printf("|                          |--------|  e Condicionador (1 un) |--------| e Condicionador (1 un)  |------\n");
                    printf("|                          |--------|                         |--------|-Kit dental (1 un)       |------\n");
                    printf("--------------------------------------------------------------------------------------------------------\n");
                    printf("\n\nEscolha o tamanho da sua PetBox                                                                     \n");
                    printf("1 - Pequeno                                                                                             \n");
                    printf("3 - Médio                                                                                               \n");
                    printf("3 - Grande                                                                                              \n");
                    printf("\nOpção: ");
                    scanf("%d", &tamanhoBoxCaoAdultos2);
                    }
                        else if (categoriaCaoAdultos==3)
                        {
                        printf("----------------------------------------------------------------------------------------------------------\n");
                        printf("| PetBox para Adultos                                                                                    |\n");
                        printf("----------------------------------------------------------------------------------------------------------\n");
                        printf("| 3 - Super Premium  |                                                                                  \n");
                        printf("----------------------                                                                                  \n");
                        printf("\n  Acompanha rações 100 de origem animal. Além disso, todos os conservantes utilizados são de origem   \n");
                        printf("\n                     natural. O seu cão com o melhor do mundo Pet!                                    \n");
                        printf("\n--------------------------------------------TAMANHOS ---------------------------------------------------\n\n");
                        printf("--------------------------------------------------------------------------------------------------------\n");
                        printf("|     PetBOX: Pequeno      |--------|      PetBOX: Médio      |--------|     PetBOX: Grande      |------\n");
                        printf("|      Plano mensal        |--------|      Plano mensal       |--------|      Plano mensal       |------\n");
                        printf("|      R$ 109,90/mês       |--------|      R$ 169,90/mês      |--------|     R$ 199,90/mês       |------\n");
                        printf("|       Plano anual        |--------|      Plano anual        |--------|      Plano anual        |------\n");
                        printf("|      R$ 99,90/mês        |--------|      R$ 159,90/mês      |--------|     R$ 189,90/mês       |------\n");
                        printf("--------------------------------------------------------------------------------------------------------\n");
                        printf("|Itens:                    |--------|Itens:                   |--------|Itens:                   |------\n");
                        printf("|-Ração premium  (5 kg)    |--------|-Ração premium  (8 kg)   |--------|-Ração premium  (12 kg)  |------\n");
                        printf("|-Petiscos (2 un)          |--------|-Petiscos (3 un)         |--------|-Petiscos (4 un)         |------\n");
                        printf("|-Brinquedo (1 un)         |--------|-Brinquedo (1 un)        |--------|-Brinquedo (1 un)        |------\n");
                        printf("|-Tapete higiênico (10 un) |--------|-Tapete higiênico (15 un)|--------|-Tapete higiênico (15 un)|------\n");
                        printf("|-Sabonete (2 un)          |--------|-Sabonete (2 un)         |--------|-Sabonete (2 un)         |------\n");
                        printf("|                          |--------|-Kit de Shampoo, Colônia |--------|-Kit de Shampoo, Colônia |------\n");
                        printf("|                          |--------|  e Condicionador (1 un) |--------| e Condicionador (1 un)  |------\n");
                        printf("|                          |--------|                         |--------|-Kit dental (1 un)       |------\n");
                        printf("--------------------------------------------------------------------------------------------------------\n");
                        printf("\n\nEscolha o tamanho da sua PetBox                                                                     \n");
                        printf("1 - Pequeno                                                                                             \n");
                        printf("2 - Médio                                                                                               \n");
                        printf("3 - Grande                                                                                              \n");
                        printf("\nOpção: ");
                        scanf("%d", &tamanhoBoxCaoAdultos3);
                        }
                else if (categoriaCaoIdosos==1)
                {
                printf("----------------------------------------------------------------------------------------------------------\n");
                printf("| PetBox para Idosos                                                                                     |\n");
                printf("----------------------------------------------------------------------------------------------------------\n");
                printf("| 1 - Standard |                                                                                        \n");
                printf("----------------                                                                                        \n");
		        printf("\nAcompanha ração balanceada com proteínas de boa qualidade preparadas por empresas de renome no mercado\n");
                printf("\nNa composição da ração você encontrar farinha de carne, gordura animal, glúten  e outros ingredientes \n");
                printf("\n--------------------------------------------TAMANHOS ---------------------------------------------------\n\n");
                printf("--------------------------------------------------------------------------------------------------------\n");
                printf("|     PetBOX: Pequeno      |--------|      PetBOX: Médio      |--------|     PetBOX: Grande      |------\n");
                printf("|      Plano mensal        |--------|      Plano mensal       |--------|      Plano mensal       |------\n");
                printf("|      R$ 89,90/mês        |--------|      R$ 129,90/mês      |--------|     R$ 159,90/mês       |------\n");
                printf("|       Plano anual        |--------|      Plano anual        |--------|      Plano anual        |------\n");
                printf("|      R$ 79,90/mês        |--------|      R$ 119,90/mês      |--------|     R$ 149,90/mês       |------\n");
                printf("--------------------------------------------------------------------------------------------------------\n");
                printf("|Itens:                    |--------|Itens:                   |--------|Itens:                   |------\n");
                printf("|-Ração standard (5 kg)    |--------|-Ração standard (8 kg)   |--------|-Ração standard (12 kg)  |------\n");
                printf("|-Petiscos (2 un)          |--------|-Petiscos (3 un)         |--------|-Petiscos (4 un)         |------\n");
                printf("|-Brinquedo (1 un)         |--------|-Brinquedo (1 un)        |--------|-Brinquedo (1 un)        |------\n");
                printf("|-Tapete higiênico (10 un) |--------|-Tapete higiênico (15 un)|--------|-Tapete higiênico (15 un)|------\n");
                printf("|-Sabonete (2 un)          |--------|-Sabonete (2 un)         |--------|-Sabonete (2 un)         |------\n");
                printf("|                          |--------|-Kit de Shampoo, Colônia |--------|-Kit de Shampoo, Colônia |------\n");
                printf("|                          |--------|  e Condicionador (1 un) |--------| e Condicionador (1 un)  |------\n");
                printf("|                          |--------|                         |--------|-Kit dental (1 un)       |------\n");
                printf("--------------------------------------------------------------------------------------------------------\n");
                printf("\n\nEscolha o tamanho da sua PetBox                                                                     \n");
                printf("1 - Pequeno                                                                                             \n");
                printf("2 - Médio                                                                                               \n");
                printf("3 - Grande                                                                                              \n");
                printf("Opção: ");
                scanf("%d", &tamanhoBoxCaoIdosos1);
               
                }
                    else if (categoriaCaoIdosos==2)
                    {
                    printf("\n--------------------------------------------------------------------------------------------------------\n");
                    printf("| PetBox para Idosos                                                                                     |\n");
                    printf("----------------------------------------------------------------------------------------------------------\n");
                    printf("| 2 - Premium  |                                                                                        \n");
                    printf("----------------                                                                                        \n");
                    printf("\n    Acompanha rações de primeira qualidade ricas em proteínas de alta digestibilidade, as quais       \n");         
                    printf("\n               proporcionaram um melhor funcionamento do organismo do seu Pet.                         \n");
                    printf("\n--------------------------------------------TAMANHOS ---------------------------------------------------\n\n");
                    printf("--------------------------------------------------------------------------------------------------------\n");
                    printf("|     PetBOX: Pequeno      |--------|      PetBOX: Médio      |--------|     PetBOX: Grande      |------\n");
                    printf("|      Plano mensal        |--------|      Plano mensal       |--------|      Plano mensal       |------\n");
                    printf("|      R$ 99,90/mês        |--------|      R$ 149,90/mês      |--------|     R$ 179,90/mês       |------\n");
                    printf("|       Plano anual        |--------|      Plano anual        |--------|      Plano anual        |------\n");
                    printf("|      R$ 89,90/mês        |--------|      R$ 139,90/mês      |--------|     R$ 169,90/mês       |------\n");
                    printf("--------------------------------------------------------------------------------------------------------\n");
                    printf("|Itens:                    |--------|Itens:                   |--------|Itens:                   |------\n");
                    printf("|-Ração premium  (1 kg)    |--------|-Ração premium  (2 kg)   |--------|-Ração premium  (3  kg)  |------\n");
                    printf("|-Petiscos (2 un)          |--------|-Petiscos (3 un)         |--------|-Petiscos (4 un)         |------\n");
                    printf("|-Brinquedo (1 un)         |--------|-Brinquedo (1 un)        |--------|-Brinquedo (1 un)        |------\n");
                    printf("|-Tapete higiênico (10 un) |--------|-Tapete higiênico (15 un)|--------|-Tapete higiênico (15 un)|------\n");
                    printf("|-Sabonete (2 un)          |--------|-Sabonete (2 un)         |--------|-Sabonete (2 un)         |------\n");
                    printf("|                          |--------|-Kit de Shampoo, Colônia |--------|-Kit de Shampoo, Colônia |------\n");
                    printf("|                          |--------|  e Condicionador (1 un) |--------| e Condicionador (1 un)  |------\n");
                    printf("|                          |--------|                         |--------|-Kit dental (1 un)       |------\n");
                    printf("--------------------------------------------------------------------------------------------------------\n");
                    printf("\n\nEscolha o tamanho da sua PetBox                                                                     \n");
                    printf("1 - Pequeno                                                                                             \n");
                    printf("3 - Médio                                                                                               \n");
                    printf("3 - Grande                                                                                              \n");
                    printf("\nOpção: ");
                    scanf("%d", &tamanhoBoxCaoIdosos2);
                    }
                        else if (categoriaCaoIdosos==3)
                        {
                        printf("\n--------------------------------------------------------------------------------------------------------\n");
                        printf("| PetBox para Idosos                                                                                     |\n");
                        printf("----------------------------------------------------------------------------------------------------------\n");
                        printf("| 3 - Super Premium  |                                                                                  \n");
                        printf("----------------------                                                                                  \n");
                        printf("\n  Acompanha rações 100 de origem animal. Além disso, todos os conservantes utilizados são de origem   \n");
                        printf("\n                     natural. O seu cão com o melhor do mundo Pet!                                    \n");
                        printf("\n--------------------------------------------TAMANHOS ---------------------------------------------------\n\n");
                        printf("--------------------------------------------------------------------------------------------------------\n");
                        printf("|     PetBOX: Pequeno      |--------|      PetBOX: Médio      |--------|     PetBOX: Grande      |------\n");
                        printf("|      Plano mensal        |--------|      Plano mensal       |--------|      Plano mensal       |------\n");
                        printf("|      R$ 109,90/mês       |--------|      R$ 169,90/mês      |--------|     R$ 199,90/mês       |------\n");
                        printf("|       Plano anual        |--------|      Plano anual        |--------|      Plano anual        |------\n");
                        printf("|      R$ 99,90/mês        |--------|      R$ 159,90/mês      |--------|     R$ 189,90/mês       |------\n");
                        printf("--------------------------------------------------------------------------------------------------------\n");
                        printf("|Itens:                    |--------|Itens:                   |--------|Itens:                   |------\n");
                        printf("|-Ração premium  (5 kg)    |--------|-Ração premium  (8 kg)   |--------|-Ração premium  (12 kg)  |------\n");
                        printf("|-Petiscos (2 un)          |--------|-Petiscos (3 un)         |--------|-Petiscos (4 un)         |------\n");
                        printf("|-Brinquedo (1 un)         |--------|-Brinquedo (1 un)        |--------|-Brinquedo (1 un)        |------\n");
                        printf("|-Tapete higiênico (10 un) |--------|-Tapete higiênico (15 un)|--------|-Tapete higiênico (15 un)|------\n");
                        printf("|-Sabonete (2 un)          |--------|-Sabonete (2 un)         |--------|-Sabonete (2 un)         |------\n");
                        printf("|                          |--------|-Kit de Shampoo, Colônia |--------|-Kit de Shampoo, Colônia |------\n");
                        printf("|                          |--------|  e Condicionador (1 un) |--------| e Condicionador (1 un)  |------\n");
                        printf("|                          |--------|                         |--------|-Kit dental (1 un)       |------\n");
                        printf("--------------------------------------------------------------------------------------------------------\n");
                        printf("\n\nEscolha o tamanho da sua PetBox                                                                     \n");
                        printf("1 - Pequeno                                                                                             \n");
                        printf("2 - Médio                                                                                               \n");
                        printf("3 - Grande                                                                                              \n");
                        printf("\nOpção: ");
                        scanf("%d", &tamanhoBoxCaoIdosos3);
                        }
                            else 
                             {
                             printf("Número inválido\n");
                             printf("--------------------------------------------------------------------------------------------------------\n\n");
                             system("pause");
                             system("cls");
                             clubepet();  
                             }    


} 