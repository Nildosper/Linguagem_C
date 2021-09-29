//Programa que calcula a potência de iluminação que deverá ser utilizada em um ambiente
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
float dimensao1, dimensao2, area, potencia ;
// entrada de dados
printf("Digite a dimensão 1: ");
scanf("%f", &dimensao1);
printf("Digite a dimensão 2: ");
scanf("%f", &dimensao2);
 // processamento
area = dimensao1 * dimensao2;
 potencia = area * 18;
// saída de dados
printf("\n----------------------------------Resultado ---------------------------------");
printf ("\nA área do seu ambiente é: %.2f", area);
printf ("\nA potência de iluminação necessária é: %.2f W", potencia);
printf("\n------------------------------------------------------------------------------\n");
system("pause");
return 0;
// Retorna codificação padrão do Windows
  SetConsoleOutputCP(CPAGE_DEFAULT);
}