#include <stdio.h>
#include <stdlib.h>

int main()
{   
    int vet_aleatorio[30], vet_par[30], vet_impar[30];

    for (int i = 0; i < 30; i++){
        vet_aleatorio[i] = rand() % 100;
    }

    for (int i = 0; i < 30; i++){
        if (vet_aleatorio[i] % 2 == 0){
            vet_par[i] = vet_aleatorio[i];
            printf("PAR: %d\n",vet_par[i]);
        }   
    }

    for (int i = 0; i < 30; i++){
        if (vet_aleatorio[i] % 2 != 0){
            vet_impar[i] = vet_aleatorio[i];
            printf("IMPAR: %d\n",vet_impar[i]);
        }  
    }

    return 0;
}