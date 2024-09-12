#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    void inverterString(char *str) {
        int inicio = 0;
        int fim = strlen(str) - 1;
        while (inicio < fim) {
            char temp = str[inicio];
            str[inicio] = str[fim];
            str[fim] = temp;
            inicio++;
            fim--;
        }
    }

        void inverterPalavrasSentenca(char *sentenca) {
            char *inicioPalavra = sentenca;
            char palavraTemp[1000]; 
            int tamanhoPalavra;

                while (*sentenca) {
                    if (*sentenca == ' ' || *sentenca == '\0') {
                        tamanhoPalavra = sentenca - inicioPalavra;
                        strncpy(palavraTemp, inicioPalavra, tamanhoPalavra);
                        palavraTemp[tamanhoPalavra] = '\0';
                        inverterString(palavraTemp);
                        printf("%s ", palavraTemp);

                        inicioPalavra = sentenca + 1;
                    }
                    sentenca++;
                }

                    tamanhoPalavra = sentenca - inicioPalavra;
                    strncpy(palavraTemp, inicioPalavra, tamanhoPalavra);
                    palavraTemp[tamanhoPalavra] = '\0';
                    inverterString(palavraTemp);
                    printf("%s", palavraTemp);
                }

                    int main() {
                        char frase[] = "AMU MEGASNEM ATERCES"; 
                        inverterPalavrasSentenca(frase); 
                        return 0;
                    }
