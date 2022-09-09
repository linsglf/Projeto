#include <stdio.h>
#include <stdlib.h>

float calculo_imc(){

    float peso, altura;

    printf("Digite seu peso em Kg: ");
    scanf("%f", &peso);
    printf("Digite sua altura em metros: ");
    scanf("%f", &altura);

    float imc = peso / (altura * altura);

    return imc;
}

int main()
{   
    int opcao;

    printf("1 - Calcular percentual masculino\n2 - Calcular percentual feminino\nDigite sua opcao: ");
    scanf("%d", &opcao);

    if (opcao == 1){

      float imc = calculo_imc();
      int idade;

      printf("Qual a sua idade: ");
      scanf("%d", &idade);

      float gordura_masculina = (imc * 1.2) + (idade * 0.23) - 16.2; 

      printf("Seu imc: %.2f\n", imc);
      printf("Seu percentual de gordura: %.2f\n", gordura_masculina);

      if (gordura_masculina < 11){
            printf("Atleta!");
      }else if (gordura_masculina >= 11 && gordura_masculina <= 13){
            printf("Bom!");
      }else if (gordura_masculina > 13 && gordura_masculina <= 20){
            printf("Normal!");
      }else if (gordura_masculina > 20 && gordura_masculina <= 23){
            printf("Elevado!");
      }else if (gordura_masculina > 23){
            printf("Alto!");
      }
    }else if (opcao == 2){

      float imc = calculo_imc();
      int idade;

      printf("Qual a sua idade: ");
      scanf("%d", &idade);

      float gordura_feminina = (imc * 1.2) + (idade * 0.23) - 5.4; 

      printf("Seu imc: %.2f\n", imc);
      printf("Seu percentual de gordura: %.2f\n", gordura_feminina);

      if (gordura_feminina < 16){
            printf("Atleta!");
      }else if (gordura_feminina >= 16 && gordura_feminina <= 19){
            printf("Bom!");
      }else if (gordura_feminina > 19 && gordura_feminina <= 28){
            printf("Normal!");
      }else if (gordura_feminina > 28 && gordura_feminina <= 31){
            printf("Elevado!");
      }else if (gordura_feminina > 31){
            printf("Alto!");
      }
    }else {
      printf("opcao invalida!");
    }
    
    return 0;
}