#include "tab.h"
#include "stdio.h"
#include "stdlib.h"

TAB* copia (TAB *a);

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
    TAB* b = NULL;
    b =  copia(a);
    printf("\n");
    imprime(b);
    printf("\n");
    return 0;
}


TAB* copia (TAB *a){
    if(!a) return NULL;
    TAB *novo = NULL;
    novo = insere(novo,a->info);
    novo->esq = copia(a->esq);
    novo->dir = copia(a->dir);
    return novo;
}
 