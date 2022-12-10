/*

Projeto vai ser um "jogo" de rpg onde os personagens serão objetos, seus atributos serão vida e dano, cada classe (Tanker e lutador) será 
uma herança, itens que serão agregações e a mudança de valores serão o polimorfismo.

*/
#include <iostream>
#include <vector>

using namespace std;

class Personagem {

protected:
	string nome;
	float vida;
	float dano;
		
public:
	void setNome(string nome){
		this->nome = nome;
	}
	
	void getNome(){
		return this->nome;
	}
	
	void setVida(float vida){
		this->vida = vida;
	}
	
	void getVida(){
		return this->vida;
	}
	
	void setDano(float dano){
		this->dano = dano;
	}

	float getDano(){
		return this->dano;
	}
	

};

class Tanker: public Personagem{
	//Sobrescrita de mÃ½todo

public:
	
	float calculaDano(){
		return this->dano * 0.8;
	}
	
	float calculaVida(){
		return this->vida * 1;
	}
};
class Lutador: public Personagem{
	//Sobrescrita de mÃ½todo
	
public:

	float calculaDano(){
		return this->dano * 1;
	}
	
	float calculaVida(){
		return this->vida * 0.8;
	}
};




class Monstro {

private:
	float vida;
	float dano;
	
//  Conta* conta;

public:
	
	void setVida(float vida){
		this->vida = vida;
	}
	
	void getVida(){
		return this->vida;
	}
	
	void setDano(float dano){
		this->dano = dano;
	}

	float getDano(){
		return this->dano;
	}
	
/*	void setConta(Conta* conta){
		this->conta = conta;
	}
	
	Conta* getConta(){
		return this->conta;
	} */
	
};


class GerenciaDeContas{
/*	Tem um atributo custos, que acumula os custos
	de manutenção de todas as contas do programa.
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




