#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../lib/tarefa1extensao.h"

struct Funcionario{
    char nome[100];
    float salario;
    float convenio;
    float premio;
    float salarioLiquido;
};


int main() {
    system("clear");
    struct Funcionario fun;
    printf("Digite o nome do funcionario:\n ");
    fgets(fun.nome, sizeof(fun.nome), stdin);

    printf("Digite o salario do funcionario:\n ");
    scanf("%f", &fun.salario);

    printf("Digite o valor do convenio do funcionario:\n ");
    scanf("%f", &fun.convenio);

    printf("Digite o valor do premio do funcionario:\n ");
    scanf("%f", &fun.premio);

    printf("O desconto do convênio é %.2f\n", jurosSimples(fun.salario,fun.convenio));
    printf("O valor do premio é %.2f\n", jurosSimples(fun.salario,fun.convenio));

    fun.salarioLiquido = fun.salario + jurosSimples(fun.salario, fun.premio)-jurosSimples(fun.salario, fun.convenio);
    printf("O salario liquido do funcionario é %.2f\n", fun.salarioLiquido);

    //Vamos criar uma composição com textos liberais e variáveis para
    //guardar no arquivo de texto
    char dados_funcionario[100];
    
    char nome[30] = {"Nome:"};
    strcat(nome,fun.nome);
    strcat(dados_funcionario, nome);

    //Criamos o vetor salário para armazenar o texto "Salário com R$
    //e juntar(concatenar) com o valor do salário
    char salario[20] = {"Salário: R$ "};

    //Foi criado o vetor c_salario para guardar o valor do salário convertido
    //em char. Somente assim, será concatenado com o texto Salário R$
    char c_salario[10];

    //Estamos usando o comando sprintf para converter o valor digitado
    //do salario, que vem no formato float, para o formato char,
    //Assim podemos juntar com o vetor salario, criando,entaõ a
    //estrurura: Salário R$ 0000.00
    sprintf(c_salario, "%.2f", fun.salario);

    //Junção (concatenação) entre os vetores salário(Salario R$) com
    //c_salario(o valor digitado do salario)
    strcat(salario,c_salario);

    //Depoi de juntar os vetores relacionados ao salários, agora iremos
    // adicionar ao vetor de dados_funcionario para,então,gravar no
    //arquivo de texto
    strcat(dados_funcionario,salario);
    
  
    



    
    char salario_liquido[20] = {"\nLíquido: R$ "};
    
    char c_salario_liquido[10];
   
    sprintf(c_salario_liquido, "%.2f", fun.salarioLiquido);

    strcat(salario_liquido, c_salario_liquido);

    strcat(dados_funcionario, c_salario_liquido);
    
    
    char *resposta = criar("files/funcionario.txt",dados_funcionario);
    printf("%s\n", resposta);

    return 0;

}
    


