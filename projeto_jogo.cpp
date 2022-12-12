/*

Projeto vai ser um "jogo" de rpg onde os personagens ser�o objetos, seus atributos ser�o vida e dano, cada classe (Tanker e lutador) ser� 
uma heran�a, itens que ser�o agrega��es e a mudan�a de valores ser�o o polimorfismo.

*/
#include <iostream>
#include <vector>

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
		cout<<"Criando atributo forca para o personagem, no endere�o "<<this<<endl;
	}

};

//Subclasse
class AtributoInteligencia: public Atributo{

public:
	//Polimorfismo
	void criaAtributo(){
		cout<<"Criando atributo inteligencia para o personagem, no endere�o "<<this<<endl;
	}

};

//Subclasse
class AtributoVida: public Atributo{

public:
	//Polimorfismo
	void criaAtributo(){
		cout<<"Criando atributo vida para o personagem, no endere�o "<<this<<endl;
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

//Apresenta��o de Dados
void apresentaCadastro(vector<Campeao> cadastroDeCampeoes, vector<Atributo> cadastroDeAtributos){

	for(int i = 0; i < cadastroDeCampeoes.size(); i++){
		cout<< "Nome do campeao: "<<cadastroDeCampeoes[i].getNomeCampeao()<<endl;
		cout<<endl;
		
	}
	
	for(int j = 0; j < cadastroDeAtributos.size(); j++){
	    cout<< "Valor do atributo "<< cadastroDeAtributos[j].getNomeAtributo() << ": "<<cadastroDeAtributos[j].getValor()<<endl;
		cout<<endl;
	    }
}

//Apresenta��o de Dados
void apresentaNome(vector<Campeao> cadastroDeCampeoes){
	for(int i = 0; i < cadastroDeCampeoes.size(); i++){
		cout<< "Nome do campeao: "<<cadastroDeCampeoes[i].getNomeCampeao()<<endl;
		cout<<endl;
	}
}

int main(){
    
	int qtdCampeoes, qtdAtributos, resposta, resposta2;
	vector<Campeao> cadastroDeCampeoes;
	vector<Atributo> cadastroDeAtributos;

	cout << "Quantidade de Campeoes: "<< endl;
	cin  >> qtdCampeoes;

		for(int i = 0; i < qtdCampeoes; i++){
			string nomeCampeao;
			
			cout << "\nEntre com o nome do campeao "<< i + 1 << ": " << endl;
			cin >> nomeCampeao;	
			
			//Cria��o de Objeto
			Campeao campeao;
			campeao.setNomeCampeao(nomeCampeao);
			
			cadastroDeCampeoes.push_back(campeao);	
				
			for (int j = 0; j < 3; j++) {
				float valor; 
				
				if (j == 0) {
    				cout << "\nEntre com o valor do atributo Forca de "<< campeao.getNomeCampeao() << endl;
    				cin >> valor;
    				
    				AtributoForca atributoForca;
								
    				atributoForca.setValor(valor);
    				atributoForca.setNomeAtributo("Forca");
    				atributoForca.criaAtributo();
    				
    				campeao.setAtributo(atributoForca);
    				//Agrega��o
    				cout << "Forca: " << campeao.getAtributo().getValor() << endl;

    				cadastroDeAtributos.push_back(atributoForca);
    			}
    				
				if (j == 1) {
    				cout << "\nEntre com o valor do atributo Inteligencia de "<< campeao.getNomeCampeao() << endl;
    				cin >> valor;
    					
    				AtributoForca atributoInteligencia;
								
    				atributoInteligencia.setValor(valor);
    				atributoInteligencia.setNomeAtributo("Inteligencia");
    				atributoInteligencia.criaAtributo();
    				
    				campeao.setAtributo(atributoInteligencia);
    				//Agrega��o
    				cout << "Inteligencia: " << campeao.getAtributo().getValor() << endl;
    					
    				cadastroDeAtributos.push_back(atributoInteligencia);
    			}
    			
    			if (j == 2) {
    			    cout << "\nEntre com o valor do atributo Vida de "<< campeao.getNomeCampeao() << endl;
    				cin >> valor;
    					
    				AtributoForca atributoVida;
								
    				atributoVida.setValor(valor);
    				atributoVida.setNomeAtributo("Vida");
    				atributoVida.criaAtributo();
    				
    				campeao.setAtributo(atributoVida);
    				//Agrega��o
    				cout << "Vida: " << campeao.getAtributo().getValor() << endl;
    				
    				cadastroDeAtributos.push_back(atributoVida);
    			}
    		
			}
	    }
	    
apresentaCadastro(cadastroDeCampeoes, cadastroDeAtributos);


	//Edi��o de Objeto
    cout << "Deseja editar algum parametro dos personagens? \n\n(1) Sim\n(2) Nao\n" << endl;
    cin >> resposta;
    
    switch (resposta) {

        case 1:
        {
            string nome;
        	cout<<endl<<"----EDITANDO----"<<endl;
        	cout<<endl<<"\nO que voce deseja alterar?\n\n(1) Nome\n"<<endl;
        	cin >> resposta2;
        	
        	switch (resposta2) {
        	    
        	    case 1:
        	    {
                	cout<<"Que nome voce quer alterar?: "<<endl;
                	cin>>nome;
                	
                	int contador = 0;
                	while(contador < cadastroDeCampeoes.size()){
                		
                		if(cadastroDeCampeoes[contador].getNomeCampeao()==nome){
                			string novoNome;
                			cout<<"Digite o novo nome: "<<endl;
                			cin>>novoNome;
                			
                			cadastroDeCampeoes[contador].setNomeCampeao(novoNome);
                		}
                		
                		contador++;
                	}
                	
                	apresentaNome(cadastroDeCampeoes);
                	break;
                }
        	}
        }
        
        case 2:
        {
            cout << "Terminando codigo!" <<endl;
            apresentaCadastro(cadastroDeCampeoes, cadastroDeAtributos);
            break;
        }
        
        default:
        {
        	cout << "Digita um numero porra" << endl;
		}
    }

return 0;
}





