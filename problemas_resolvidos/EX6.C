// Tabuada de multiplicação de um número digitado pelo usuário 
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main()
{setlocale(LC_ALL, "Portuguese");

// Declaração de Variáveis
float numero, r1, r2,r3,r4,r5,r6,r7,r8,r9,r10,r11; 
// Entrada de dados
printf("------------------------------------------Tabuada de multiplicacao-----------------------------------------------------\n");
printf("Digite um numero de 0 a 10:  ");
scanf("%f", &numero); 
// processamento de dados
r1=numero*0;
r2=numero*1;
r3=numero*2;
r4=numero*3; 
r5=numero*4; 
r6=numero*5;
r7=numero*6; 
r8=numero*7;
r9=numero*8;
r10=numero*9; 
r11=numero*10;
// saída de dados
printf("%2.f x 0: %2.f \n", numero, r1);
printf("%2.f x 1: %2.f \n", numero, r2);
printf("%2.f x 2: %2.f \n", numero, r3);
printf("%2.f x 3: %2.f \n", numero, r4);
printf("%2.f x 4: %2.f \n", numero, r5);
printf("%2.f x 5: %2.f \n", numero, r6);
printf("%2.f x 6: %2.f \n", numero, r7);
printf("%2.f x 7: %2.f \n", numero, r8);
printf("%2.f x 8: %2.f \n", numero, r9);
printf("%2.f x 9: %2.f \n", numero, r10);
printf("%2.f x 10: %2.f \n", numero, r11);
system("pause");
return 0;
}