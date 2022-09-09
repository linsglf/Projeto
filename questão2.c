#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int calculo_imc(){

    int peso, altura_cm;
    float altura_m, altura_quadrado;

    printf("Digite seu peso em Kg: ");
    scanf("%d", &peso);
    printf("Digite sua altura em cm: ");
    scanf("%d", &altura_cm);

    altura_m = (float)altura_cm / 100;


    altura_quadrado = altura_m * altura_m;

    float imc = round((float)peso / (float)altura_quadrado);

    int imc_int = imc;

    return imc_int;
}

int main()
{   
    int opcao;

    printf("1 - Calcular percentual masculino\n2 - Calcular percentual feminino\nDigite sua opcao: ");
    scanf("%d", &opcao);

    if (opcao == 1){

      int imc = calculo_imc();
      int idade;

      printf("Qual a sua idade: ");
      scanf("%d", &idade);

      int gordura_masculina = (imc * 1.2) + (idade * 0.23) - 16.2; 

      printf("Seu imc: %d\n", imc);
      printf("Seu percentual de gordura: %d\n", gordura_masculina);

      if (gordura_masculina < 11){
            printf("Atleta!");
      }else if (gordura_masculina >= 11 && gordura_masculina <= 13){
            printf("Bom!");
      }else if (gordura_masculina >= 14 && gordura_masculina <= 20){
            printf("Normal!");
      }else if (gordura_masculina >= 21 && gordura_masculina <= 23){
            printf("Elevado!");
      }else if (gordura_masculina > 23){
            printf("Alto!");
      }
    }else if (opcao == 2){

      int imc = calculo_imc();
      int idade;

      printf("Qual a sua idade: ");
      scanf("%d", &idade);

      int gordura_feminina = (imc * 1.2) + (idade * 0.23) - 5.4; 

      printf("Seu imc: %d\n", imc);
      printf("Seu percentual de gordura: %d\n", gordura_feminina);

      if (gordura_feminina < 16){
            printf("Atleta!");
      }else if (gordura_feminina >= 16 && gordura_feminina <= 19){
            printf("Bom!");
      }else if (gordura_feminina >= 20 && gordura_feminina <= 28){
            printf("Normal!");
      }else if (gordura_feminina >= 29 && gordura_feminina <= 31){
            printf("Elevado!");
      }else if (gordura_feminina > 31){
            printf("Alto!");
      }
    }else {
      printf("opcao invalida!");
    }
    
    return 0;
}