#ifndef TAB_H
#define TAB_H

typedef struct ab{
int info;
struct ab *esq, *dir;
}TAB;


TAB *insere(TAB *a, int info);
TAB *cria(int info);
void imprime(TAB*);
#endif
