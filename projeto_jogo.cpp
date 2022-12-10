/*

Projeto vai ser um "jogo" de rpg onde os personagens serão objetos, seus atributos serão vida e dano, cada classe (Tanker e lutador) será 
uma herança, itens que serão agregações e a mudança de valores serão o polimorfismo.

*/
#include <iostream>
#include <vector>

using namespace std;

class Atributo {

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
	
	virtual float determinarValor(){
	}	
};

class AtributoForca: public Atributo{
	//Sobrescrita de mÃ½todo

public:
	AtributoForca(){
		cout<<"Criando atributo forca para o personagem, no endereço "<<this<<endl;
	}
	
	float determinaValor(){
		
	}
};
class AtributoInteligencia: public Atributo{
	//Sobrescrita de mÃ½todo
	
public:
	AtributoInteligencia(){
		cout<<"Criando atributo inteligencia para o personagem, no endereço "<<this<<endl;
	}
	
	float determinaValor(){
		
	}
};

class AtributoVida: public Atributo{
	//Sobrescrita de mÃ½todo
	
public:
	AtributoVida(){
		cout<<"Criando atributo inteligencia para o personagem, no endereço "<<this<<endl;
	}
	
	float determinaValor(){
		
	}
};




class Campeao {

private:
	string nomeCampeao;
	Atributo* atributo;
		
public:
	
	void setNomeCampeao(string nomeCampeao){
		this->nomeCampeao = nomeCampeao;
	}
		
	string getNomeCampeao(){
		return this->nomeCampeao;
	}
	
	void setAtributo(Atributo* atributo){
		this->atributo = atributo;
	}
	
	Atributo* getAtributo(){
		return this->atributo;
	}
	
};


/*class GerenciaDeContas{
/*	Tem um atributo custos, que acumula os custos
	de manutenção de todas as contas do programa.
*/
/*private:
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
};*/


void apresentaCadastro(vector<Campeao> cadastroDeCampeoes, vector<Atributo> cadastroDeAtributos){
	
	for(int i = 0; i < cadastroDeCampeoes.size(); i++){
		cout<<"Nome do campeao: "<<cadastroDeCampeoes[i].getNomeCampeao()<<endl;
		cout<<endl;
		
	}
	
	for(int j = 0; j < cadastroDeAtributos.size(); j++){
	    cout<<"Valor do atributo: "<<cadastroDeAtributos[j].getValor()<<endl;
		cout<<endl;
	    }
	
}

int main(){

	int qtdCampeoes, qtdAtributos;
	vector<Campeao> cadastroDeCampeoes;
	vector<Atributo> cadastroDeAtributos;

	cout << "Quantidade de Campeos: "<< endl;
	cin  >> qtdCampeoes;

		for(int i = 0; i < qtdCampeoes; i++){
			string nomeCampeao;
			
			cout << "Entre com o nome do campeao "<< i + 1 << endl;
			cin >> nomeCampeao;	
			
			
			Campeao campeao;
			campeao.setNomeCampeao(nomeCampeao);
			
			cadastroDeCampeoes.push_back(campeao);	
				
			cout << "Quantidade de atributos: " << endl;
			cin  >> qtdAtributos;
			
			for (int j = 0; j < qtdAtributos; j++) {
				int select;
				float valor; 
				cout << "Para selecionar Forca, pressione 1, para Inteligencia, pressione 2:" << endl;
				cin >> select;
				
				if (select == 1) {
    				cout << "Entre com o valor do atributo "<< j + 1 <<" do "<< i + 1 <<"° campeao" << endl;
    				cin >> valor;
    					
    				AtributoForca atributoForca;
    				atributoForca.setValor(valor);	
    					
    				cadastroDeAtributos.push_back(atributoForca);
    			}
    				
				else {
    				cout << "Entre com o valor do atributo "<< j + 1 <<" do "<< i + 1 <<"° campeao" << endl;
    				cin >> valor;
    					
    				AtributoInteligencia atributoInteligencia;
    				atributoInteligencia.setValor(valor);	
    					
    				cadastroDeAtributos.push_back(atributoInteligencia);
    			}
			}
	    }
	    
apresentaCadastro(cadastroDeCampeoes, cadastroDeAtributos);
return 0;

}




