#include <iostream>
#include <string>

using namespace std;

class Champion
{
 	private:
    string nome;
    float dano;
    float hp;
    
    public:
    
    string getNome(){
    	return this -> nome;
	}
    
    void setNome(string nome){
    	this->nome = nome;
	}
	
	float getHp(){
		return this->hp;
	}
	
	void setHp(float hp){
		this->hp = hp;
	}
	
	float getDano(){
		return this->dano;
	}
	
	void setDano(float dano){
		this->dano = dano;
	}
	    
    Champion ataca (Champion campeao){
    	float hpInimigo = campeao.getHp();
    	campeao.setHp(hpInimigo - this->dano);
    	return campeao;
	}
    
};

int main()
{
    Champion c1,c2;
    c1.setNome("Garen");
    c1.setHp(800);
    c1.setDano(20);
    
    c2.setNome("Darius");
    c2.setHp(600);
    c2.setDano(30);
    
    c1 = c2.ataca(c1);
    
    cout<<c1.getNome()<<"\n"<<c1.getHp()<<endl;
    
    
    
}
