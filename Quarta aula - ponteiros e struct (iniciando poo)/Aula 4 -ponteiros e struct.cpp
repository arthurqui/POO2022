#include<iostream>
using namespace std;

struct pessoa
{   
    string nome;
    int idade;
};

void atribuiNome (struct pessoa* Pes, string oNome)
{
    (*Pes).nome =oNome;
}

void atribuiIdade (struct pessoa* Pes, int aIdade)
{
    Pes->idade =aIdade;
}

void mostraPessoa (struct pessoa* Pes)
{
    cout <<"nome: "<<Pes->nome<<",idade: "<<Pes->idade<<endl; 
}

int main()
{
    struct pessoa p1;
    atribuiNome(&p1,"josé");
    //p1.nome = "josé";
    atribuiIdade(&p1, 20);
    //p1.idade = 20;
    mostraPessoa (&p1);
    //cout <<"nome: "<<p1.nome<<",idade: "<<p1.idade<<endl; 
    return 0;
}