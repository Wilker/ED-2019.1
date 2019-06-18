#include "tab.h"
#include "stdio.h"
#include "stdlib.h"
#include "limits.h"

int igual (TAB* a1, TAB* a2);


int main(void){
    TAB* a = NULL;
    TAB* b = NULL;
    TAB* c = NULL;
    
    a = insere (a,5);
    
    a = insere (a,3);
    a = insere (a,4);
    a = insere (a,2);
    
    a = insere (a,8);
    
    a = insere (a,6);
    a = insere (a,7);
    a = insere (a,9);

    printf("\n");

    b = insere (b,5);
    
    b = insere (b,3);
    b = insere (b,4);
    b = insere (b,2);
    
    b = insere (b,8);
    
    b = insere (b,6);
    b = insere (b,7);
    b = insere (b,9);

    imprime(a);
    imprime(b);
    printf("\n");
    printf("%d", igual(a,b));
    printf("\n");

    c = insere (c,5);
    
    c = insere (c,3);
    c = insere (c,4);
    c = insere (c,2);
    
    c = insere (c,8);
    
    c = insere (c,6);
    c = insere (c,7);

    imprime(c);
    printf("\n");
    printf("%d", igual(a,c));
    printf("\n");

    printf("\n");
    printf("%d", igual(b,c));
    printf("\n");

    return 0;
}


int igual (TAB* a1, TAB* a2){
    if(!a1 && !a2) return 1;
    if((a1 && a2)&&(a1->info == a2->info)) return 1 && igual(a1->esq,a2->esq) && igual(a1->dir,a2->dir);
    return 0;
}
 