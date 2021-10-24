#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h> // funções matemáticas

void areaQuad();
void areaRet();
void areaTri();
void areaCir();
void areaLos();
void areaTrap();


int main()
{
	setlocale(LC_ALL,"Portuguese");
    
	int op;
	
	printf("Qual area deseja calcular?\n");
    printf("1 - Quadrado\n");
    printf("2 - Retangulo\n");
    printf("3 - Triangulo\n");
    printf("4 - Circulo\n");
    printf("5 - Losango\n");
    printf("6 - Trapezio\n");
    printf("0 - Sair do programa\n");
    printf("OpÃ§Ã£o: ");
	scanf("%d", &op);    
	
    switch(op){
        case 1:
            areaQuad(); // area de um quadrado
            break;
        case 2:
            areaRet(); // area de um retangulo
            break;
        case 3:
            areaTri(); // area de um triangulo
            break;
        case 4:
            areaCir(); // area de um circulo
            break;
        case 5:
            areaLos(); // area de um losango
            break;
        case 6:
            areaTrap(); // area de um trapezio
            break;
        case 0:
            exit(0);
        default:
            printf("Digite uma opÃ§Ã£o valida...\n");
            system("pause");
            system("cls");
            main();
    }
    return 0;
}

void areaQuad(){ // area quadrado
    float lados;
    system("cls");
    printf("Calculo da Area de um Quadrado\n\n");
    printf("Tamanho dos lados: ");
    scanf("%f", &lados);
    if(lados <= 0){
        printf("Lados invalidos\n\n");
        system("pause");
        areaQuad();
    }
    printf("Area do Quadrado Ã©: %.2f\n\n",pow(lados,2));
    system("pause");
    system("cls");
    main();
}

void areaRet(){ // area retangulo
    float base,altura;
    system("cls");
    printf("Calculo da Area de um Retangulo\n\n");
    printf("Tamanho da base: ");
    scanf("%f", &base);
    if(base <= 0){
        printf("Base invalida\n\n");
        system("pause");
        areaRet();
    }
    printf("Tamanho da altura(na mesma unidade de medida): ");
    scanf("%f", &altura);
    if(altura <= 0){
        printf("Altura invalida\n\n");
        system("pause");
        areaRet();
    }
    printf("Area do Retangulo Ã©: %.2f\n\n",base * altura);
    system("pause");
    system("cls");
    main();
}

void areaTri(){ // area triangulo
    float base,altura;
    system("cls");
    printf("Calculo da Area de um Triangulo\n\n");
    printf("Tamanho da base: ");
    scanf("%f", &base);
    if(base <= 0){
        printf("Base invalida\n\n");
        system("pause");
        areaTri();
    }
    printf("Tamanho da altura(na mesma unidade de medida): ");
    scanf("%f", &altura);
    if(altura <= 0){
        printf("Altura invalida\n\n");
        system("pause");
        areaTri();
    }
    printf("Area do Retangulo Ã©: %.2f\n",(base*altura)/2);
    system("pause");
    system("cls");
    main();
}

void areaCir(){ // area circulo
    float raio;
    system("cls");
    printf("Calculo da Area de um Circulo\n\n");
    printf("Tamanho do raio: ");
    scanf("%f", &raio);
    if(raio <= 0){
        printf("Raio invalido\n\n");
        system("pause");
        areaCir();
    }
    printf("Area do Circulo Ã©: %.2f\n",M_PI*pow(raio,2));
    system("pause");
    system("cls");
    main();
}

void areaLos(){ // area losango
    float diagMaior, diagMenor;
    system("cls");
    printf("Calculo da Area de um Losango\n\n");
    printf("Tamanho da diagonal maior: ");
    scanf("%f", &diagMaior);
    if(diagMaior <= 0){
        printf("Diagonal maior invalida\n\n");
        system("pause");
        areaLos();
    }
    printf("Tamanho da diagonal maior: ");
    scanf("%f", &diagMenor);
    if(diagMenor <= 0){
        printf("Diagonal menor invalida\n\n");
        system("pause");
        areaLos();
    }
    printf("Area do Losango Ã©: %.2f\n",(diagMaior*diagMenor)/2);
    system("pause");
    system("cls");
    main();
}

void areaTrap(){ // area trapezio
    float baseMaior,baseMenor,altura;
    system("cls");
    printf("Calculo da Area de um Trapezio\n\n");
    printf("Tamanho da base maior: ");
    scanf("%f", &baseMaior);
    if(baseMaior <= 0){
        printf("Base maior invalida\n\n");
        system("pause");
        areaTrap();
    }
    printf("Tamanho da base menor: ");
    scanf("%f", &baseMenor);
    if(baseMenor <= 0){
        printf("Base menor invalida\n\n");
        system("pause");
        areaTrap();
    }
    printf("Tamanho da altura: ");
    scanf("%f", &altura);
    if(altura <= 0){
        printf("Altura invalida\n\n");
        system("pause");
        areaTrap();
    }
    printf("Area do Quadrado Ã©: %.2f\n",((baseMaior+baseMenor)*altura)/2);
    system("pause");
    system("cls");
    main();
}
