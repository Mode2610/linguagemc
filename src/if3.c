#include <stdio.h>

int main() {
    int valor = 15;
    if (valor < 0) {
        printf("O valor %d é negativo.\n", valor);              
    } else if (valor >= 0 && valor <= 10) { // Verifica se o valor está entre 0 e 10 inclusive}
        printf("O valor %d está entre 0 e 10.\n", valor);
    } else if (valor > 10 && valor <= 20) { //verifica se o valor está entre 11} e 20 incluse)
        printf("O valor %d está entre 11e 20.\n", valor);
    } else { // Se não se encaixar em nenhuma das condições anteriores
        printf(" O valor %d é maior que 20.\n", valor);  
 }
 return 0;
 
}


