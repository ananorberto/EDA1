#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int Item;

typedef struct pilha_st
{
    Item *carta;
    int top;
    int size;
} pilha_st;

int inicializaP(pilha_st *p, int s)
{
    p->carta = malloc(sizeof(Item)*s);
    if(p->carta == NULL) return 0;
    p->size = s;
    p->top = 0;
    return 1;
}
int empilha(pilha_st *p, Item e)
{
    if (esta_cheia(p)) return 1;

    p->carta[p->top++] = e; 
    return 0;
}
int esta_vazia(pilha_st *p)
{
    return p->top == -1;
}
int esta_cheia(pilha_st *p)
{
    return p->top == p->size;
}
void desempilha(pilha_st *p)
{
    if (esta_vazia(p)) return;
    p->top--;
    
}
void desalocaP(pilha_st *p)
{
    free(p->carta);
    return;
}
Item show_top(pilha_st *p)
{
    return p->carta[p->top];
}

void move(pilha_st *p) {
  int top = p->top - 1;
  int aux = p->carta[top];
  for (int i = top; i > 0; i--) {
    p->carta[i] = p->carta[i - 1];
  }
  p->carta[0] = aux;
}

int main(){
    int n;
    scanf("%d", &n);
    pilha_st p;
    inicializaP(&p, n);

    for(int i = n; i > 0; i--){
        empilha(&p, i);
    }

    printf("Cartas descartadas: ");
    while(p.top != 2){
        int descartada = p.carta[--p.top];
        printf("%d, ", descartada);
        move(&p);
    }

    printf("%d\n", p.carta[p.top - 1]);
    desempilha(&p);
    printf("Carta restante: %d\n", p.carta[p.top - 1]);
    return 0;
}