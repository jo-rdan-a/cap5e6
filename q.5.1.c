#include <stdio.h>
#include <stdlib.h>

#define CAPACIDADE 100

int fila[CAPACIDADE]; 
int inicio = 0;      
int final = -1;    

    void adicionar(int valor) {
        if (final == CAPACIDADE - 1) {
            printf("fila cheia\n");
            return;
        }
        fila[++final] = valor;
    }

   
        void remover() {
            if (inicio > final) {
                printf("fila vazia\n");
                return;
            }
            inicio++;
        }

            int main() {
                adicionar(1);
                adicionar(2);
                adicionar(3);
                
                printf("elemento removido: %d\n", fila[inicio]); 
                remover();
                
                printf("elemento removido: %d\n", fila[inicio]); 
                remover();
                
                return 0;
            }
