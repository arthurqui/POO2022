#include <iostream>

struct pessoa
{
    std::string nome;
    int idade;
};

void atribuiNomePessoa(struct pessoa* pes, std::string valorNome)
{
    (*pes).nome = valorNome;
}

void atribuiIdadePessoa(struct pessoa* pes, int valorIdade)
{
    pes->idade = valorIdade;
}

void mostraPessoa(struct pessoa* pes)
{
    std::cout<<"Nome: "<<pes ->nome<<", idade: "<<pes->idade;
}

int main()
{
    struct pessoa p1;
    atribuiNomePessoa(&p1, "Arthur");
    atribuiIdadePessoa(&p1, 27);
    mostraPessoa(&p1);
    return 0;
}