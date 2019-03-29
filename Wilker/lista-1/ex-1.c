#include <stdio.h>
#include <stdlib.h>

void imprime(int *vet, int n);
int max_seg(int *vet, int n);
int max (int a, int b);

int main(int argc, char *argv[]){
    int n = 0;
    do{
        scanf("%d",&n);
        int *numeros = (int*)malloc(sizeof(int)*n);
        int i =0;
        for(i = 0; i < n; i++){
            scanf("%d",&numeros[i]); 
        }
        //imprime(numeros,n);
        printf("Máximo segumentos => %d \n",max_seg(numeros,n));
    }
    while (n>0);
    return 0;
}

void imprime(int *vet, int n){
    int i = 0;
    for(i = 0; i <n; i++){
        printf("%d ",vet[i]);
    }
    printf("\n");
}

/*
int max_seg(int *vet, int ant){
    int ant = ant;
    if(!vet[1])
        return 0; 
    if(vet[1]>vet[0]){
        return 1+max_seg(&vet[1],ant);
    }
    if(vet[1]<vet[0]){
        return 0+max+seg()
    }
}
*/

int max_seg(int *vet, int n){
    int i = 0;
    int maior = 1;
    int atual = 1;
    for(i = 0; i < n-1; i++){
        if(vet[i+1] > vet[i]){
            atual++;
            if(maior<atual){
                maior = atual;
            }
        }else{
            atual = 1;
        }
    }
    return maior;
}


int max(int a, int b){
    return b < a ? a : b;
}