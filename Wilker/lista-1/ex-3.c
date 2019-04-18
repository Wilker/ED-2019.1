#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void imprime(int *vet, int n);
int* calc_potencias(int n, int m, int*tam);

int main(int argc, char* argv[]){
    int n,m;
    scanf("%d %d", &n, &m);
    while(n > 0 && (m>=-1 && m<=1)){
        int tam =0;
        int* potencias = calc_potencias(n,m,&tam);
        printf("tam => %d \n",tam);
        imprime(potencias,tam);
        scanf("%d %d", &n, &m);
    }
    return 0;
}

int* calc_potencias(int n, int m, int*tam){
    int aux=0,count=0,i=0;
    for(i = 0; aux < n; i++){
        aux=pow(m,i);
        if(aux<n)
            count++;
    }
    printf("Count => %d \n",count);
    int *resp = (int*)malloc(sizeof(int)*count);
    *tam = count;
    for(i = 0; i < count; i++){
        resp[i] = pow(m,i);
    }
    return resp;
}



void imprime(int *vet, int n){
    int i = 0;
    for(i = 0; i <n; i++){
        printf("%d ",vet[i]);
    }
    printf("\n");
}
