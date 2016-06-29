#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"

struct arv{
	char info;
	struct arv* dir;
	struct arv* esq;
};
Arv* arv_criavazia (void)
{
	return NULL;
}
Arv* arv_cria (char c, Arv* e, Arv* d)
{
	Arv* a = (Arv*)malloc(sizeof(Arv));
	a->info = c;
	a->dir = d;
	a->esq = e;
	return a;
}
int arv_vazia (Arv* a)
{
	return a==NULL;
}
int arv_pertence (Arv* a, char c)
{
	if(arv_vazia(a))
		return 0;
	else
		return a->info==c || arv_pertence(a->esq, c) || arv_pertence(a->dir, c);
	
}
void arv_imprime (Arv* a)
{
	if(!arv_vazia(a))
	{
		printf("%c ", a->info);
		arv_imprime(a->esq);
		arv_imprime(a->dir);
	}
}
Arv* arv_libera (Arv* a)
{
	if(!arv_vazia(a))
	{
		arv_libera(a->esq);
		arv_libera(a->dir);
		free(a);
	}
	return NULL;
}
Arv* arv_pai (Arv* a, char c)
{
	if(!arv_vazia)
	{
		arv_pai(a->esq);
		arv_pai(a->dir);
		return 
	}
}
int folhas (Arv* a)
{
	if(arv_vazia(a))
		return 0;
	if(a->esq == NULL && a->dir == NULL)
		return 1;
	else
		return (folhas(a->esq) + folhas(a->dir));
}
