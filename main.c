#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "remove.h"

void decodificarMensagem(int b, char *mensagemHex) {
    int x = 1;  
    char *p = mensagemHex;

    while (*p != '\0' && *(p + 1) != '\0') {
        char hex[3] = {p[0], p[1], '\0'};
        int valor = (int)strtol(hex, NULL, 16);

        if (valor == 0) break;

        if (func_val(x, b) != 0) {
            printf("%c", valor);
        }

        p += 2;  
        x++;
    }

    printf("\n");
}

int main() {
    int numTestes;
    scanf("%d", &numTestes);  

    for (int i = 0; i < numTestes; i++) {
        int b;
        char mensagemHex[101];
        scanf("%d", &b); 
        scanf("%s", mensagemHex);  
        decodificarMensagem(b, mensagemHex);  
        }

    return 0;
}
