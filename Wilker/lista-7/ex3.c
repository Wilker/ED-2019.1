    #include "tab.h"
#include "stdio.h"
#include "stdlib.h"

int maior (TAB *a);
int max(int a, int b);


int main(void){
    TAB* a = NULL;
    
    
    a = insere (a,5);
    
    a = insere (a,3);
    a = insere (a,4);
    a = insere (a,2);
    
    a = insere (a,8);
    
    a = insere (a,6);
    a = insere (a,7);
    a = insere (a,9);

    imprime(a);
    int max = -1;
    printf("\n");
    max = maior(a);
    printf("%d", max);
    printf("\n");
    return 0;
}


int maior (TAB *a){
    if(!a) return 0;
    int m = max(a->info, maior(a->esq));
    m = max(m, maior(a->dir));
    return m;
}

int max(int a, int b){
    return a > b ? a : b;
}
 