#include <stdio.h>
#include <stdlib.h>

int main() {
    //Vamos declarar a variável que irá represerntar
    // arquivo em tempo de execução.
    //Esta variável deve ser declarada como
    //uma CONSTANTE, o seu conteudo NUNCA
    //poderáser alterado. Uma vez alocado o 
    //nome e caminho do arquivo, estes não poderão
    //mudar em tempo de execução para não perder a
    //localização do arquivo e sua posição
    //em memória.

    FILE *arquivo;
    
    //Vamos definir onde o arquivo está ou será
    //criado. Para isso iremos usar o comando
    //fopen(f-file=arquivo | open=abrir)
    //Além disso iremos definir o atributo de 
    //manipulação de arquivos,tais como:
    //r -> read(leitura) | w -> write(escrita)
    // a -> append(adição de texto) | pipe
    arquivo = fopen("files/texto.txt","a");

    //vamos escrever no arquivo
    fprintf(arquivo,"sexta-feira\n");

    //fechar o arquivo
    fclose(arquivo);
    printf("Arquivo criado com sucesso!\n");
    return 0;

}