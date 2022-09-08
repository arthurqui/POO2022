#include <iostream>
#include <string>
struct Pessoa
{
    std::string nome;
    int idade;

    void atribuiNome(std::string valorNome)
    {
    this ->nome = valorNome;
    }
    
    void atribuiIdade(int valorIdade)
    {
    this ->idade = valorIdade;
    }
    void mostra()
    {
    std::cout << "Nome: " << this->nome << ", idade: " <<
    this ->idade << "\n";
    }
};

int main()
{
    struct Pessoa p1;
    p1.atribuiNome("José");
    p1.atribuiIdade(20);
    p1.mostra();
    return 0;
}