/*

Projeto vai ser um "jogo" de rpg onde os personagens ser�o objetos, seus atributos ser�o vida e dano, cada classe (Tanker e lutador) ser� 
uma heran�a, itens que ser�o agrega��es e a mudan�a de valores ser�o o polimorfismo.

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
		cout<<"Criando uma conta corrente, no endere�o "<<this<<endl;
	}
	
	float calculaCusto(){
		return this->saldo * 0.05;
	}
};
class ContaPoupanca: public Conta{
	//Sobrescrita de mýtodo
	
public:
	ContaPoupanca(){
		cout<<"Criando uma conta poupan�a, no endere�o "<<this<<endl;
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
	de manuten��o de todas as contas do programa.
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
	    cout<<"N�mero da Conta: "<<cadastroDeContas[j].getNumero()<<endl;
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
			
			cout << "Entre com o nome do "<< i + 1 << "� cliente: "<< endl;
			cin >> nome;	
			
			cout << "Entre com o cpf do "<< i + 1 <<"� cliente: "<< endl;
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
    				cout << "Entre com o numero da "<< j + 1 <<"� conta do "<< i + 1 <<"� cliente" << endl;
    				cin >> numero;	
    			
    				cout << "Entre com o saldo da "<< j + 1 <<"� conta do "<< i + 1 <<"� cliente" << endl;
    				cin >> saldo;
    					
    				ContaCorrente contaCorrente;
    				contaCorrente.setNumero(numero);
    				contaCorrente.setSaldo(saldo);	
    					
    				cadastroDeContas.push_back(contaCorrente);
    			}
    				
				else {
    				cout << "Entre com o numero da "<< j + 1 <<"� conta do "<< i + 1 <<"� cliente" << endl;
    				cin >> numero;	
    			
    				cout << "Entre com o saldo da "<< j + 1 <<"� conta do "<< i + 1 <<"� cliente" << endl;
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




