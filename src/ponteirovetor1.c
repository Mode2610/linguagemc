#include <stdio.h>
#include <stdlib.h>

int main() {
    int idades[5]={15,18,56,41,50};
    printf("%d - %p\n", idades[0], &idades[0]);
    printf("%d - %p\n", idades[1], &idades[1]);
    printf("%d - %p\n", idades[2], &idades[2]);
    printf("%d - %p\n", idades[3], &idades[3]);
    printf("%d - %p\n", idades[4], &idades[4]);
    printf("=================For====================\n"); 
    int i;
    for(i=0;i<5;i++){
        printf("%d - %p\n", idades[i], &idades[i]);
    }
     printf("=================Ponteiro====================\n");
     //vamos obter a posição de memória do primeiro elemento do vetor
     //e atribuir a um ponteiro p
      int *p = idades;
      printf("o primeiro elemento do array é %d - %p\n", *p, p);    
      //incrementar o ponteiro p para apontar para o próximo elemento
        p++;
        printf("o segundo elemento do array é %d - %p\n", *p, p);
        p++;
        printf("o terceiro elemento do array é %d - %p\n", *p, p);
        p++;
        printf("o quarto elemento do array é %d - %p\n", *p, p);
        p++;
        printf("o quinto elemento do array é %d - %p\n", *p, p);
        
    printf("=================Ponteiro e For====================\n");
    int *ptr = idades; // ponteiro para o primeiro elemento do vetor
    for( i=0 ; i < 5 ; i++){
        printf("o  %d º elemento - é %d - %p\n", i+1, *ptr, ptr);
        ptr++; // incrementa o ponteiro para o próximo elemento
    }


    return 0;
}    