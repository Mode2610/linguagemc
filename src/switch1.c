#include <stdio.h>
// vamos incluir uma nova biblioteca de sistema
// que possui o comando clear
#include <stdlib.h>

int main(){
    //vamos chamar a funçaõ de sistema para executar
    //o comando clear(limpar atela do terminal)
    system("clear");
    int numes;
    printf("=============Programa mês============\n");
    printf("\nPergunte ao programa. Qual é o mês de número: ");
    scanf("%d",&numes);
    printf("\n\n=====================================\n");

    switch (numes){
        case 1:
        printf("Janeiro\n");
        break;
        case 2:
        printf("Fvereiro\n");
        break;
         case 3:
        printf("março\n");
        break;
         case 4:
        printf("abril\n");
        break;
         case 5:
        printf("maio\n");
        break;
         case 6:
        printf("junho\n");
        break;
         case 7:          
        printf("julho\n");
        break;
        case 8:          
        printf("agosto\n");
        break;
        case 9:          
        printf("setembro\n");
        break;
        case 10:          
        printf("outubro\n");
        break;
        case 11:          
        printf("novembro\n");
        break;
        case 12:          
        printf("dezembro\n");
        break;
        default:
        printf("Este mes não existe!\n");

    }
return 0;
}
        


