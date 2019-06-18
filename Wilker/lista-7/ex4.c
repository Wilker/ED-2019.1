#include "tab.h"
#include "stdio.h"
#include "stdlib.h"
#include "limits.h"

int menor (TAB *a);
int min(int a, int b);


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
    int min = -1;
    printf("\n");
    min = menor(a);
    printf("%d", min);
    printf("\n");
    return 0;
}


int menor (TAB *a){
    if(!a) return INT_MAX;
    int m = min(a->info, menor(a->esq));
    m = min(m, menor(a->dir));
    return m;
}

int min(int a, int b){
    return a < b ? a : b;
}
 