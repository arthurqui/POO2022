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

};

class AtributoForca: public Atributo{
	//Sobrescrita de mÃ½todo

public:
	AtributoForca(){
		cout<<"Criando atributo forca para o personagem, no endereço "<<this<<endl;
	}

};
class AtributoInteligencia: public Atributo{
	//Sobrescrita de mÃ½todo
	
public:
	AtributoInteligencia(){
		cout<<"Criando atributo inteligencia para o personagem, no endereço "<<this<<endl;
	}

};

class AtributoVida: public Atributo{
	//Sobrescrita de mÃ½todo
	
public:
	AtributoVida(){
		cout<<"Criando atributo vida para o personagem, no endereço "<<this<<endl;
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

void apresentaCadastro(vector<Campeao> cadastroDeCampeoes, vector<Atributo> cadastroDeAtributos){
	
	for(int i = 0; i < cadastroDeCampeoes.size(); i++){
		cout<<"Nome do campeao: "<<cadastroDeCampeoes[i].getNomeCampeao()<<endl;
		cout<<endl;
		
	}
	
	for(int j = 0; j < cadastroDeAtributos.size(); j++){
	    cout<<"Valor do atributo "<< cadastroDeAtributos[j].getNomeAtributo() << ": "<<cadastroDeAtributos[j].getValor()<<endl;
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
			
			cout << "Entre com o nome do campeao "<< i + 1 << ": " << endl;
			cin >> nomeCampeao;	
			
			Campeao campeao;
			campeao.setNomeCampeao(nomeCampeao);
			
			cadastroDeCampeoes.push_back(campeao);	
				
			cout << "Quantidade de atributos: " << endl;
			cin  >> qtdAtributos;
			
			for (int j = 0; j < qtdAtributos; j++) {
				int select;
				float valor; 
				cout << "Para selecionar Forca, pressione 1, para Inteligencia, pressione 2 e para Vida, pressione 3:" << endl;
				cin >> select;
				
				if (select == 1) {
    				cout << "Entre com o valor do atributo "<< j + 1 <<" do "<< i + 1 <<" campeao" << endl;
    				cin >> valor;
    					
    				AtributoForca atributoForca;
    				atributoForca.setValor(valor);
    				atributoForca.setNomeAtributo("Forca");
    					
    				cadastroDeAtributos.push_back(atributoForca);
    			}
    				
				if (select == 2) {
    				cout << "Entre com o valor do atributo "<< j + 1 <<" do "<< i + 1 <<" campeao" << endl;
    				cin >> valor;
    					
    				AtributoInteligencia atributoInteligencia;
    				atributoInteligencia.setValor(valor);
    				atributoInteligencia.setNomeAtributo("Inteligencia");
    					
    				cadastroDeAtributos.push_back(atributoInteligencia);
    			}
    			
    			if (select == 3) {
    			    cout << "Entre com o valor do atributo "<< j + 1 <<" do "<< i + 1 <<" campeao" << endl;
    				cin >> valor;
    					
    				AtributoVida atributoVida;
    				atributoVida.setValor(valor);
    				atributoVida.setNomeAtributo("Vida");
    					
    				cadastroDeAtributos.push_back(atributoVida);
    			}
    		
			}
	    }
	    
apresentaCadastro(cadastroDeCampeoes, cadastroDeAtributos);


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
                	cout<<"Que nome voce quer alterar?: ";
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
                	
                	apresentaCadastro(cadastroDeCampeoes, cadastroDeAtributos);
                }
        	}
        }
        
        case 2:
        {
            cout << "Terminando codigo!" <<endl;
            apresentaCadastro(cadastroDeCampeoes, cadastroDeAtributos);
        }
    }

return 0;
}





