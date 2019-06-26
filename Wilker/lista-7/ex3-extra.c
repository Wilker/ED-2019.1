#include "tab.h"
#include "stdio.h"
#include "stdlib.h"

int teste3 (TAB *a);
int filho_unico(TAB *a);

int main(void){
    TAB* a = NULL;
    TAB* b = NULL;
    TAB* c = NULL;
    TAB* d = NULL;
    TAB* e = NULL;
    TAB* f = NULL;


    a = insere (a,5);
    a = insere (a,3);
    a = insere (a,9);
    a = insere (a,7);
    a = insere (a,8);
    imprime(a);
    printf("\n %d \n",teste3(a));

    b = insere (b,5);
    b = insere (b,3);
    b = insere (b,7);
    b = insere (b,8);
    b = insere (b,6);
    imprime(b);
    printf("\n %d \n",teste3(b));

    c = insere (c,12);
    c = insere (c,1);
    c = insere (c,9);
    c = insere (c,2);
    c = insere (c,7);
    c = insere (c,8);
    imprime(c);
    printf("\n %d \n",teste3(c));

    d = insere (d,10);
    d = insere (d,20);
    d = insere (d,5);
    d = insere (d,15);
    imprime(d);
    printf("\n %d \n",teste3(d));

    e = insere (e,12);
    e = insere (e,1);
    e = insere (e,9);
    e = insere (e,5);
    e = insere (e,4);
    e = insere (e,7);
    imprime(e);
    printf("\n %d \n",teste3(e));

    imprime(f);
    printf("\n %d \n",teste3(f));


    return 0;
}


int teste3 (TAB *a){
    if(!a) return 1;
    return filho_unico(a->esq) && filho_unico(a->dir);
}
 

int filho_unico(TAB *a){
    if(!a)return 1;
    if(a->esq && a->dir) return 0;
    return filho_unico(a->esq) && filho_unico(a->dir);
}