#include <stdio.h>

int main(){ 
    int numero;
    printf("Digite um númedo e tecle Enter\n");
    scanf("%d" ,&numero);
    if ( numero % 2 == 0){
        printf("O número %d é par\n" ,numero);
    }  
    else{
        printf("O numero %d é IMPAR\n",numero);
    }
    return 0; 
}