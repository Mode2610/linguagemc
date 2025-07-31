#include <stdio.h>
int main() {
    int pontuacao = 85;
    char conceito;
    if (pontuacao >= 90 ) { //Primeira condiçao
        conceito = 'A';
    } else if ( pontuacao >= 80) { // Segunda codiçao, só avaliada se a primaeira for falsa        
        conceito = 'B';
    } else if (pontuacao >=70){ // Terceira condição, só avaliada se as anteriores forem falsas             
        conceito = 'C';
    } else if (pontuacao >=60) { // quarta condiçao
        conceito = 'D';
    } else { // se nenhuma das condições acima for verdadeira
        conceito = 'F';
    }
    printf("Pontuacão: %d - > Conceito: %c \n", pontuacao, conceito);

    return 0;
}