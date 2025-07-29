#include <stdio.h>

int main(){
    int numero;
    printf("Digite um número etecle Enter\n");
    scanf("%d",&numero);
    if(numero >17){
        printf("Voce está autorizado a entrar\n");        
    }
    else{
        printf("Voce não está autorizado\n");
    }
return 0;

}