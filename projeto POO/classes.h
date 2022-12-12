#include <iostream>
#include <vector>
#include <cmath>
#include <Windows.h>
#include <unistd.h>

using namespace std;

//Classe
class Atributo{

protected:
	string nomeAtributo;
	float valor;

public:
	void setNomeAtributo(string nomeAtributo){
		this->nomeAtributo = nomeAtributo;
	}
	
	void setValor(float valor){
		this->valor = valor;
	}
	
	string getNomeAtributo(){
		return this->nomeAtributo;
	}

	float getValor(){
		return this->valor;
	}
	//Polimorfismo
	virtual void criaAtributo(){

	}
};

//Subclasse
class AtributoForca: public Atributo{

public:
	//Polimorfismo
	void criaAtributo(){
		cout<<"Criando atributo Forca para o personagem "<<endl;
		
		
		for(int i = 0; i < 5; i++){
		
		Sleep(100);
        std::cout << "\b\\" << std::flush;
        Sleep(100);
        std::cout << "\b|" << std::flush;
        Sleep(100);
        std::cout << "\b/" << std::flush;
        Sleep(100);
        std::cout << "\b-" << std::flush;}
		
		
	}

};

//Subclasse
class AtributoInteligencia: public Atributo{

public:
	//Polimorfismo
	void criaAtributo(){
		cout<<"Criando atributo Inteligencia para o personagem "<<endl;
		for(int i = 0; i < 5; i++){
		
		Sleep(100);
        std::cout << "\b\\" << std::flush;
        Sleep(100);
        std::cout << "\b|" << std::flush;
        Sleep(100);
        std::cout << "\b/" << std::flush;
        Sleep(100);
        std::cout << "\b-" << std::flush;} 
	}

};

//Subclasse
class AtributoVida: public Atributo{

public:
	//Polimorfismo
	void criaAtributo(){
		cout<<"Criando atributo Vida para o personagem"<<endl;
		for(int i = 0; i < 5; i++){
		
		Sleep(100);
        std::cout << "\b\\" << std::flush;
        Sleep(100);
        std::cout << "\b|" << std::flush;
        Sleep(100);
        std::cout << "\b/" << std::flush;
        Sleep(100);
        std::cout << "\b-" << std::flush;} 
	}

};

//Classe
class Campeao{

private:
	string nomeCampeao;
	Atributo atributo;
		
public:
	
	void setNomeCampeao(string nomeCampeao){
		this->nomeCampeao = nomeCampeao;
	}
		
	string getNomeCampeao(){
		return this->nomeCampeao;
	}
	
	void setAtributo(Atributo atributo){
		this->atributo = atributo;
	}

	Atributo getAtributo(){
		return this->atributo;
	}

};

//Apresentação de Dados
void apresentaCadastro(vector<Campeao> cadastroDeCampeoes, vector<Atributo> cadastroDeAtributos){
	cout<<"\n\n Personagens cadastrados: "<<endl;
	
		
	for(int i = 0; i < cadastroDeCampeoes.size(); i++){
		cout<< "Nome do Personagem: "<<cadastroDeCampeoes[i].getNomeCampeao()<<endl;	    
		cout<<endl;
	    	
		
	}
	
	for(int j = 0; j < cadastroDeAtributos.size(); j++){
	    cout<< "Valor do atributo "<< cadastroDeAtributos[j].getNomeAtributo() << ": "<<cadastroDeAtributos[j].getValor()<<endl;
		cout<<endl;
	    }
}

//Apresentação de Dados
void apresentaNome(vector<Campeao> cadastroDeCampeoes){
	cout<<"\n\nLista de nomes de personagens cadastrados: "<<endl;
	for(int i = 0; i < cadastroDeCampeoes.size(); i++){
		
		cout<< "Nome do personagem "<< i+1<<": "<<cadastroDeCampeoes[i].getNomeCampeao()<<endl;
		cout<<endl;
	}
}

