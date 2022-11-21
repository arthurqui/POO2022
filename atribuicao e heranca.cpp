
//Faça um programa que cadastre dados de clientes e contas destes clientes. Um cliente pode ter CPF, nome e conta.

//Uma conta pode ter numero e saldo.

//Crie métodos para manipular esses atributos.

#include <iostream>
#include <string>

using namespace std;

class Conta
{
	protected:
    string numero;
    float saldo;
    
    public:
    
    void setNumero(string numero){
    	this->numero = numero;
	}
    
    string getNumero(){
    	return this -> numero;
	}
	
	void setSaldo(float saldo){
    	this->saldo = saldo;
	}
    
    float getSaldo(){
    	return this -> saldo;
	}
};


class Cliente
{
	protected:
    string nome;
    string cpf;
    Conta conta;
    
    public:
    
    void setNome(string nome){
    	this->nome = nome;
	}
    
    string getNome(){
    	return this -> nome;
	}
	
	void setCpf(string cpf){
    	this->nome = nome;
	}
    
    string getCpf(){
    	return this -> cpf;
	}
	
	void setConta(Conta conta){
    	this->conta = conta;
	}
    
    Conta getConta(){
    	return this -> conta;
	}
	
};



/*
extenda a classe conta para conta corrente ou conta poupança
*/

class ContaCorrente: public Conta{
	public:
		//sobrescrita de metodos
	float calculaCusto(){
		return this -> getSaldo() * 0.05;	
	}
	
};

class ContaPoupanca: public Conta{
	public:
	//sobrescrita de metodos
	float calculaCusto(){
		return 10;
	}
	
};

//

int main (){
	Cliente cliente1, cliente2;
	cliente1.setNome("Fulano");
	
	ContaCorrente contaCorrente;
	contaCorrente.setNumero("11111");
	contaCorrente.setSaldo(25452.);
	
	cliente1.setConta(contaCorrente);
	
	cout<<"Nome do cliente 1: "<<cliente1.getNome()<<endl;
	cout<<"Numero da conta 1: "<<cliente1.getConta().getNumero()<<endl;
	cout<<"Saldo da conta 1: "<<cliente1.getConta().getSaldo()<<endl;
	
	cliente2.setNome("Ciclano");
	
	ContaPoupanca contaPoupanca;
	contaPoupanca.setNumero("22222");
	contaPoupanca.setSaldo(27.);
	
	cliente2.setConta(contaPoupanca);
	
	cout<<"\nNome do cliente 2: "<<cliente2.getNome()<<endl;
	cout<<"Numero da conta 2: "<<cliente2.getConta().getNumero()<<endl;
	cout<<"Saldo da conta 2: "<<cliente2.getConta().getSaldo()<<endl;
	
	
	
	return 0;
}
