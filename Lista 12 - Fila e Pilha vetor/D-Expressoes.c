#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char Item;

typedef struct pilha_st {
  Item *carta;
  int top;
  int size;
} pilha_st;

int inicializaPilha(pilha_st *p, int s) {
  p->carta = malloc(sizeof(Item) * s);
  if (p->carta == NULL) return 0;
  p->size = s;
  p->top = -1;
  return 1;
}

int empilha(pilha_st *p, Item e) {
  if (estaCheia(p)) return 1;
  p->carta[++p->top] = e;
  return 0;
}

int estaVazia(pilha_st *p) {
  return p->top == -1;
}

int estaCheia(pilha_st *p) {
  return p->top == p->size - 1;
}

void desempilha(pilha_st *p) {
  if (estaVazia(p)) return;
  p->top--;
}

void desalocaPilha(pilha_st *p) {
  free(p->carta);
}

Item topo(pilha_st *p) {
  return p->carta[p->top];
}

int main() {
  int t;
  scanf("%d", &t);

  while (t--) {
    pilha_st p;
    char s[100001];
    int len;

    scanf("%s", s);
    len = strlen(s);
    inicializaPilha(&p, len + 1);

    for (int i = 0; i < len; i++) {
      if (!estaVazia(&p) && (s[i] == topo(&p) + 1 || s[i] == topo(&p) + 2))
        desempilha(&p);
      else
        empilha(&p, s[i]);
    }

    if (estaVazia(&p))
      printf("S\n");
    else
      printf("N\n");

    desalocaPilha(&p);
  }
  return 0;
}
