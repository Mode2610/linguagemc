#include <stdio.h>

int main()
{
    int placa;

    printf("Digite o número final da placa do seu veiculo e tecle enter\n");
    scanf("%d", &placa);

    if (placa == 1)
    {

        printf("Rodizio de Segunda-Feira");
    }
    else if (placa == 2)
    {
        printf("Rodizio de Segunda-Feira");
    }
    else if (placa == 3)
    {
        printf("Rodizio de terça-Feira");
    }
    else if (placa == 4)
    {
        printf("Rodizio de terça-feira");
    }

    else if (placa == 5)
    {
        printf("Rodizio de quarta-Feira");
    }
    else if (placa == 6)
    {
        printf("Rodizio de quarta-Feira");
    }
    else if (placa == 7)
    {
        printf("Rodizio de quinta-Feira");
    }
    else if (placa == 8)
    {
        printf("Rodizio de quinta-Feira");
    }
    else if (placa == 9)
    {
        printf("Rodizio de sexta-Feira");
    }
    else if (placa == 0)
    {
        printf("Rodizio de sexta-Feira");
    }
    else
    {
        printf("Final de placa inválido!\n");
    }
    return 0;
}
