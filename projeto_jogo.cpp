/*
Faýa um programa que cadastre dados
de clientes e contas destes clientes.
Um Cliente pode ter:
* cpf
* nome
* conta

Uma Conta pode ter:
* nýmero
* saldo

Crie mýtodos para manipular esses atributos.
*/



#include <iostream>
#include <vector>

using namespace std;

class Conta {

protected:
	string numero;
	float saldo;
		
public:
	void setNumero(string numero){
		this->numero = numero;
	}
	
	void setSaldo(float saldo){
		this->saldo = saldo;
	}
	
	string getNumero(){
		return this->numero;
	}

	float getSaldo(){
		return this->saldo;
	}
	
	virtual float calculaCusto(){
		
	}
};

class ContaCorrente: public Conta{
	//Sobrescrita de mýtodo

public:	
	ContaCorrente(){
		cout<<"Criando uma conta corrente, no endereýo "<<this<<endl;
	}
	
	float calculaCusto(){
		return this->saldo * 0.05;
	}
};
class ContaPoupanca: public Conta{
	//Sobrescrita de mýtodo
	
public:
	ContaPoupanca(){
		cout<<"Criando uma conta poupanýa, no endereýo "<<this<<endl;
	}
	float calculaCusto(){
		return this->saldo * 10;
	}	
};




class Cliente {

private:
	string nome;
	string cpf;
	Conta* conta;
		
public:
	
	void setNome(string nome){
		this->nome = nome;
	}
	
	void setCpf(string cpf){
		this->cpf = cpf;
	}
	
	string getNome(){
		return this->nome;
	}

	string getCpf(){
		return this->cpf;
	}
	
	void setConta(Conta* conta){
		this->conta = conta;
	}
	
	Conta* getConta(){
		return this->conta;
	}
	
};


class GerenciaDeContas{
/*	Tem um atributo custos, que acumula os custos
	de manutenýýo de todas as contas do programa.
*/
private:
	float custos;
	
public:
	
	GerenciaDeContas(){
		this->custos = 0;
	}
	
	float somaCusto(Conta* conta){
		this->custos += conta->calculaCusto();	
	}
	
	float getCustos(){
		return custos;
	}
};


void apresentaCadastro(vector<Cliente> cadastroDeClientes, vector<Conta> cadastroDeContas){
	
	for(int i = 0; i < cadastroDeClientes.size(); i++){
		cout<<"Nome: "<<cadastroDeClientes[i].getNome()<<endl;
		cout<<"CPF: "<<cadastroDeClientes[i].getCpf()<<endl;
		cout<<endl;
		
	}
	
	for(int j = 0; j < cadastroDeContas.size(); j++){
	    cout<<"Número da Conta: "<<cadastroDeContas[j].getNumero()<<endl;
		cout<<"Saldo da Conta: "<<cadastroDeContas[j].getSaldo()<<endl;
		cout<<endl;
	    }
	
}

int main(){

	int qtdClientes, qtdContas;
	vector<Cliente> cadastroDeClientes;
	vector<Conta> cadastroDeContas;

	cout << "Quantidade de clientes: "<< endl;
	cin  >> qtdClientes;

		for(int i = 0; i < qtdClientes; i++){
			string nome, cpf;
			
			cout << "Entre com o nome do "<< i + 1 << "° cliente: "<< endl;
			cin >> nome;	
			
			cout << "Entre com o cpf do "<< i + 1 <<"° cliente: "<< endl;
			cin >> cpf;
			
			Cliente cliente;
			cliente.setNome(nome);
			cliente.setCpf(cpf);
			
			cadastroDeClientes.push_back(cliente);	
				
			cout << "Quantidade de contas: " << endl;
			cin  >> qtdContas;
			
			for (int j = 0; j < qtdContas; j++) {
				int num;
				string numero;
				float saldo; 
				cout << "Para selecionar Conta Corrente, pressione 1, para Conta Poupanca, pressione 2:" << endl;
				cin >> num;
				
				if (num == 1) {
    				cout << "Entre com o numero da "<< j + 1 <<"ª conta do "<< i + 1 <<"° cliente" << endl;
    				cin >> numero;	
    			
    				cout << "Entre com o saldo da "<< j + 1 <<"ª conta do "<< i + 1 <<"° cliente" << endl;
    				cin >> saldo;
    					
    				ContaCorrente contaCorrente;
    				contaCorrente.setNumero(numero);
    				contaCorrente.setSaldo(saldo);	
    					
    				cadastroDeContas.push_back(contaCorrente);
    			}
    				
				else {
    				cout << "Entre com o numero da "<< j + 1 <<"ª conta do "<< i + 1 <<"° cliente" << endl;
    				cin >> numero;	
    			
    				cout << "Entre com o saldo da "<< j + 1 <<"ª conta do "<< i + 1 <<"° cliente" << endl;
    				cin >> saldo;
    					
    				ContaPoupanca contaPoupanca;
    				contaPoupanca.setNumero(numero);
    				contaPoupanca.setSaldo(saldo);
    					
    				cadastroDeContas.push_back(contaPoupanca);
    			}
			}
	    }
	    
apresentaCadastro(cadastroDeClientes, cadastroDeContas);
return 0;

}




