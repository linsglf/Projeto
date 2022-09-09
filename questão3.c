#include <stdio.h>
#include <stdlib.h>
 
float notas[];

float aritimetico (){
    
    int qtd_notas;

    printf("Digite a quantidade de notas a serem calculadas: ");
    scanf("%d", &qtd_notas);
    fflush(stdin);
    
    for (int i = 0; i < qtd_notas; i++){
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
        fflush(stdin);
    }
    
    float soma;

    for (int i = 0; i < qtd_notas; i++){
        soma = soma + notas[i];
    }
    
    float media = soma / (float)qtd_notas;

    for (int i = 0; i < qtd_notas; i++){
        if (notas[i] > 10 || notas[i] < 0){
            printf("Nota %d invalida!\n", i + 1);
        }        
    }

    for (int i = 0; i < qtd_notas; i++){
        if (notas[i] > 10 || notas[i] < 0){
            return 0;
        }else{
            return media; 
        }
    }
}

float ponderado(){
    
}

int main()
{   
    int opcao;

    printf("1 - Media aritimetica\n2 - Media ponderada\nDigite sua escolha:");
    scanf("%d", &opcao);
    fflush(stdin);

    if (opcao == 1){
        
        float mediaA = aritimetico();

        if (mediaA == 0){
            printf("Tente novamente!");
        }else{
            printf("Sua media aritimetica: %.2f", mediaA);
        }
    }else if (opcao == 2){
        
    }
    
    
    return 0;
}