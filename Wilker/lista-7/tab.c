#include "tab.h"
#include "stdlib.h"
#include "stdio.h"

 
TAB *insere(TAB *a, int info){
    if(!a) return cria(info);
    if(info<a->info)
        a->esq = insere(a->esq,info);
    if(info>a->info)
        a->dir =  insere(a->dir,info);
    return a;
}

TAB *cria(int info){
    TAB *novo=(TAB*)malloc(sizeof(TAB));
    novo->info=info;
    novo->esq=NULL;
    novo->dir=NULL;
    return novo;
}

void imprime(TAB * T) {
    if (!T) {
        printf(("<>"));
    } else {
        if ((!T->esq)&&(!T->dir)) {
            printf("<");
            printf("%d", T->info);
            printf(">");
        } else {
            printf("<");
            printf("%d", T->info);
            imprime(T->esq);
            imprime(T->dir);
            printf(">");
        }
    }
}