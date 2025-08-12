#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &N);


    if (N < 0) {
        printf("Número inválido. Por favor, insira um número inteiro positivo.\n");
        return 1; // Encerra o programa com erro
    }


    for (int i = N; i >= 0; i--) {
        printf("%d ", i);
    }

    printf("\n"); // Quebra de linha após a listagem
    return 0;
}

