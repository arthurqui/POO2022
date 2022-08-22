#include<iostream>
using namespace std;

struct pessoa
{string nome;
int idade;}

void atribuiNome (string* nome, string textoNome)
{nome = textoNome;}

void atribuiIdade(int* idade, string valorIdade)
{*idade = valorIdade;}

void mostra(int* idade, string valorIdade)
cout <<nome<<", " << idade<<"\n";

void teste (struct pessoas[])
{pessoa[0].nome;
pessoa[0].idade;}

int main()
{
    string nome;
    int idade;
    atribuiNome(&nome, "Nome");
    atribuiIdade(&idade, 100);
    mostra(nome, idade);
    
    string nome2;
    int idade2;
    atribuiNome(&nome2, "Nome2");
    atribuiIdade(&idade2, 200);
    mostra(nome2, idade2);
    
    mostra(nome, idade2);
    struct pessoa p;
    teste(&p);
    
}