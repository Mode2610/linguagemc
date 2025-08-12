#include <stdio.h>
#include <stdlib.h>

int main() {
    int soma = 0;
    int contador = 0;
    int numero = 2;

    while (contador < 50) {
        soma += numero;
        numero += 2;
        contador++;
    }

    printf("A soma dos 50 primeiros números pares é: %d\n", soma);

    return 0;
}
