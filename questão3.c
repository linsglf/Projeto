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
     
    int qtd_notas;

    printf("Digite a quantidade de notas a serem calculadas: ");
    scanf("%d", &qtd_notas);
    fflush(stdin);

    int vet_peso[qtd_notas];
    
    for (int i = 0; i < qtd_notas; i++){
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
        fflush(stdin);
        printf("Digite o peso da nota %d: ", i + 1);
        scanf("%d", &vet_peso[i]);
        fflush(stdin);
    }

    float soma_peso = 0;

    for (int i = 0; i < qtd_notas; i++){
        soma_peso = soma_peso + (float)vet_peso[i];
    }

    float soma = 0;
    
    for (int i = 0; i < qtd_notas; i++)
    {
        soma = soma + (notas[i] * (float)vet_peso[i]);
    }

    float media = soma / soma_peso;

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

int main()
{   
    int opcao;

    printf("1 - Media aritimetica\n2 - Media ponderada\nDigite sua escolha: ");
    scanf("%d", &opcao);
    fflush(stdin);

    if (opcao == 1){
        
        float media_aritimetica = aritimetico();

        if (media_aritimetica == 0){
            printf("Tente novamente!");
        }else{
            printf("Sua media aritimetica: %.2f", media_aritimetica);
        }
    }else if (opcao == 2){

        float media_ponderada = ponderado();

        if (media_ponderada == 0){
            printf("Tente novamente!");
        }else{
            printf("Sua media ponderada: %.2f", media_ponderada);
        }
    }
    
    return 0;
}