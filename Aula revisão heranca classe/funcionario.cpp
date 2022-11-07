#include <iostream>
#include <string>

using namespace std;

class Funcionario
{
	protected:
    string nome;
    string cpf;
    float salario;
    
    public:
    
    void setNome(string nome){
    	this->nome = nome;
	}
    
    string getNome(){
    	return this -> nome;
	}
	
	void setSalario(float salario){
    	this->salario = salario;
	}
    
    float getSalario(){
    	return this -> salario;
	}
	
	float calculaBonificacao(){
		return 50;
	}
};

class Engenheiro: public Funcionario{
	public:
	float calculaBonificacao(){
		return this-> salario*0.02;
	}
};

class Gerente: public Funcionario{
	private:
		string login;
	
	public:
		void setLogin (string login){
			this-> login = login;
		}
		
		bool fazLogin(string login){
			if(this->login ==login)
				return true;
			else
				return false;
		}
};

int main()
{
    Funcionario func;
    Engenheiro eng;
    Gerente ger;
    
	func.setNome("Fulano");
	func.setSalario(1000);
	cout<<func.getNome()<<" eh o nome do funcionario \n"<<endl;
	cout<<func.getSalario()<<" eh o salario do funcionario\n"<<endl;
	cout<<func.calculaBonificacao()<<" eh a bonificacao do funcionario\n"<<endl;
    
    eng.setNome("Ciclano");
    eng.setSalario(1234);
	cout<<eng.getNome()<<" eh o nome do engenheiro \n"<<endl;
	cout<<eng.getSalario()<<" eh o salario do engenheiro \n"<<endl;
	cout<<eng.calculaBonificacao()<<" eh a bonificacao do engenheiro\n"<<endl;
	
	ger.setNome("beltrano");
	ger.setSalario(5000);
	ger.setLogin("senha123");
	cout<<ger.getNome()<<" eh o nome do gerente\n"<<endl;
	cout<<ger.getSalario()<<" eh o salario do gerente \n"<<endl;
	cout<<ger.calculaBonificacao()<<" eh a bonificacao do gerente\n"<<endl;
	
	cout<<ger.fazLogin("senha123")<<" - se tiver 1 eh verdadeiro, 0 eh falso\n"<<endl;
    
}
