#include "tab.h"
#include "stdio.h"
#include "stdlib.h"

int eb (TAB *a);

int main(void){
    TAB* a = NULL;
    TAB* b = NULL;
    TAB* c = NULL;
    TAB* d = NULL;
    TAB* e = NULL;
    TAB* f = NULL;


    a = insere (a,5);
    a = insere (a,3);
    a = insere (a,6);
    imprime(a);
    printf("\n %d \n",eb(a));

    b = insere (b,5);
    b = insere (b,3);
    imprime(b);
    printf("\n %d \n",eb(b));

    c = insere (c,5);
    imprime(c);
    printf("\n %d \n",eb(c));

    d = insere (d,5);
    d = insere (d,3);
    d = insere (d,2);
    d = insere (d,4);
    imprime(d);
    printf("\n %d \n",eb(d));

    e = insere (e,5);
    e = insere (e,3);
    e = insere (e,4);
    e = insere (e,6);
    e = insere (e,2);
    imprime(e);
    printf("\n %d \n",eb(e));

    imprime(f);
    printf("\n %d \n",eb(f));


    return 0;
}


int eb (TAB *a){
    if(!a ||(!a->esq && !a->dir)) return 1;
    if((!a->esq && a->dir) ||
    (!a->dir && a->esq))
        return 0;
    return eb(a->esq) && eb(a->dir);
}
 