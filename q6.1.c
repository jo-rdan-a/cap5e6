#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_MAX 100

int pilha[TAMANHO_MAX]; 
int topo = -1;        

    void empilhar(int valor) {
        if (topo == TAMANHO_MAX - 1) {
            printf("pilha cheia\n");
            return;
        }
        pilha[++topo] = valor;
    }

        void desempilhar() {
            if (topo == -1) {
                printf("pilha vazia\n");
                return;
            }
            topo--;
        }

            int topoPilha() {
                if (topo == -1) {
                    printf("pilha vazia\n");
                    return -1; 
                }
                return pilha[topo];
            }

                int main() {
                    empilhar(10);
                    empilhar(20);
                    empilhar(30);

                    printf("topo: %d\n", topoPilha());

                    desempilhar();
                    printf("topo após desempilhar: %d\n", topoPilha());

                    return 0;
                }
