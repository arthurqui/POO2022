#include<iostream>
using namespace std;

struct pessoa
{   
    string nome;
    int idade;
    
    void atribuiNome (string oNome)
{
    nome =oNome;
}

void atribuiIdade (int aIdade)
{
    idade =aIdade;
}

void mostraPessoa ()
{
    cout <<"nome: "<<nome<<", idade: "<<idade<<endl; 
}

};


int main()
{
    struct pessoa p1;
    //atribuiNome(&p1,"josé");
    ////p1.nome = "josé";
    //atribuiIdade(&p1, 20);
    ////p1.idade = 20;
    //mostraPessoa (&p1);
    ////cout <<"nome: "<<p1.nome<<",idade: "<<p1.idade<<endl; 
    
    p1.atribuiNome("Arthur");
    p1.atribuiIdade(27);
    p1.mostraPessoa();
    
    
    return 0;
}