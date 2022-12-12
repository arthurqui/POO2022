#include <iostream>
#include <vector>
#include <cmath>
#include <Windows.h>
#include <unistd.h>
#include "classes.h"

//projeto Arthur e Breno

int main(){
    
	int qtdCampeoes, qtdAtributos, resposta, resposta2;
	vector<Campeao> cadastroDeCampeoes;
	vector<Atributo> cadastroDeAtributos;
	

	
	
cout <<"     \n\n      /\\ "<< endl;
cout <<"      ||"<< endl;
cout <<"      ||"<< endl;
cout <<"      ||"<< endl;
cout <<"      ||           {}"<< endl;
cout <<"      ||          .--."<< endl;
cout <<"      ||         |====|"<< endl;
cout <<"      ||         |`::`|"<< endl;
cout <<"     _||_    .-;`\\..../`;-."<< endl;
cout <<"      |:'\\ |   /'''::'''\\   |                    Bem-vindo ao gerador de personagens para RPG "<< endl;
cout <<"       \\ /\\;-,/\\   ::   /\\--;              O objetivo desse programa eh criar personagens com atributos"<< endl;
cout <<"        \\ <` >  >._::_.<,<__>           forca, inteligencia e vida para serem utilizados em um jogo futuro."<< endl;
cout <<"           ``  /   ^^   \\|  |"<< endl;
cout <<"               |        |\\::/"<< endl;
cout <<"               |        |/|||"<< endl;
cout <<"               |___/\\___| '''"<< endl;
cout <<"                \\_ || _/"<< endl;
cout <<"                <_ >< _>"<< endl;
cout <<"                |  ||  |"<< endl;
cout <<"                |  ||  |"<< endl;
cout <<"               _\\.:||:./_ \n\n"<< endl;

	
	system("pause");
	system("cls");
	
	cout << "Vamos comecar... "<< endl;
	
	
	bool check = false;
	
	do {
    cout << "Quantos personagens voce deseja criar? "<< endl;
    cin  >> qtdCampeoes;
    	if (cin.fail()) 
		{
    	    cin.clear();
    	    cin.ignore();
    	    cout << "Digite apenas numeros!  \n"<< endl;
    	    system("pause");
			system("cls");
    	}
    	else
        	check = true;
        	
	}while(!check);	
	
	
		for(int i = 0; i < qtdCampeoes; i++){
			string nomeCampeao;
			
			cout << "\nEntre com o nome do campeao "<< i + 1 << ": " << endl;
			cin >> nomeCampeao;	
			system("cls");
			
			//Criação de Objeto
			Campeao campeao;
			campeao.setNomeCampeao(nomeCampeao);
			
			cadastroDeCampeoes.push_back(campeao);	
				
			for (int j = 0; j < 3; j++) {
			float valor; 
				
			if (j == 0) {
			check = false;
	
			do {
    			cout << "\nEntre com um valor para o atributo --Forca-- do personagem "<< campeao.getNomeCampeao() << endl;
    			cin >> valor;
	    			if (cin.fail()) 
					{
	    			    cin.clear();
	    			    cin.ignore();
    				    cout << "Digite apenas numeros!  \n"<< endl;
    				    system("pause");
						system("cls");
    				}
    				else
        			check = true;
        	
			}while(!check);	
					
    				
    				
    				AtributoForca atributoForca;
								
    				atributoForca.setValor(valor);
    				atributoForca.setNomeAtributo("Forca");
    				atributoForca.criaAtributo();
    				
    				campeao.setAtributo(atributoForca);
    				 
    				//Agregação
    				cout << "Forca: " << campeao.getAtributo().getValor() << endl;

    				cadastroDeAtributos.push_back(atributoForca);
    				
    				system("pause");
					system("cls");
    			}
    				
				if (j == 1) {
					
					
					check = false;
	
			do {
    			cout << "\nEntre com um valor para o atributo --Inteligencia-- do personagem "<< campeao.getNomeCampeao() << endl;
    			cin >> valor;
	    			if (cin.fail()) 
					{
	    			    cin.clear();
	    			    cin.ignore();
    				    cout << "Digite apenas numeros!  \n"<< endl;
    				    system("pause");
						system("cls");
    				}
    				else
        			check = true;
        	
			}while(!check);	
					
    				
    					
    				AtributoInteligencia atributoInteligencia;
								
    				atributoInteligencia.setValor(valor);
    				atributoInteligencia.setNomeAtributo("Inteligencia");
    				atributoInteligencia.criaAtributo();
    				
    				campeao.setAtributo(atributoInteligencia);
    				//Agregação
    				cout << "Inteligencia: " << campeao.getAtributo().getValor() << endl;
    					
    				cadastroDeAtributos.push_back(atributoInteligencia);
    				
    				system("pause");
					system("cls");
    			}
    			
    			if (j == 2) {
    				
    				check = false;
	
			do {
    			cout << "\nEntre com o valor do atributo Vida de "<< campeao.getNomeCampeao() << endl;
    				cin >> valor;
	    			if (cin.fail()) 
					{
	    			    cin.clear();
	    			    cin.ignore();
    				    cout << "Digite apenas numeros!  \n"<< endl;
    				    system("pause");
						system("cls");
    				}
    				else
        			check = true;
        	
			}while(!check);
    				
    			    
    					
    				AtributoVida atributoVida;
								
    				atributoVida.setValor(valor);
    				atributoVida.setNomeAtributo("Vida");
    				atributoVida.criaAtributo();
    				
    				campeao.setAtributo(atributoVida);
    				//Agregação
    				cout << "Vida: " << campeao.getAtributo().getValor() << endl;
    				system("pause");
					system("cls");
					
    				cadastroDeAtributos.push_back(atributoVida);
    			}
    		
			}
	    }
	
	
	int contadorMenu = 0;
	int opcao;
do {
	
	check = false;
	
	do {
	cout <<"     \n\n      /\\ "<< endl;
	cout <<"      ||"<< endl;
	cout <<"      ||"<< endl;
	cout <<"      ||"<< endl;
	cout <<"      ||           {}"<< endl;
	cout <<"      ||          .--.                                    Menu"<< endl;
	cout <<"      ||         |====|"<< endl;
	cout <<"      ||         |`::`|"<< endl;
	cout <<"     _||_    .-;`\\..../`;-.      "<< endl;
	cout <<"      |:'\\ |   /'''::'''\\   |                1 - Ver detalhes dos personagens cadastrados "<< endl;
	cout <<"       \\ /\\;-,/\\   ::   /\\--;                2 - Editar nome de um personagem"<< endl;
	cout <<"        \\ <` >  >._::_.<,<__>                3 - Sair"<< endl;
	cout <<"           ``  /   ^^   \\|  |"<< endl;
	cout <<"               |        |\\::/"<< endl;
	cout <<"               |        |/|||"<< endl;
	cout <<"               |___/\\___| '''"<< endl;
	cout <<"                \\_ || _/"<< endl;
	cout <<"                <_ >< _>"<< endl;
	cout <<"                |  ||  |"<< endl;
	cout <<"                |  ||  |"<< endl;
	cout <<"               _\\.:||:./_ \n\n"<< endl;
	
	
	
	
    			cout << "\nEscolha uma opcao: " << endl;
				
				cin >> opcao;
	    			if (cin.fail()) 
					{
	    			    cin.clear();
	    			    cin.ignore();
    				    cout << "Digite apenas numeros!  \n"<< endl;
    				    system("pause");
						system("cls");
    				}
    				else
        			check = true;
        	
			}while(!check);
		
	system("cls");
	
	switch (opcao) {
  case 1:{
  	apresentaCadastro(cadastroDeCampeoes, cadastroDeAtributos);
  	system("pause");
  	system("cls");
	break;
  }
    
  case 2:{
  	int contadorMenu2;
  	//Edição de Objeto
    do{  
            string nome;
        	
        	
        	check = false;
	
			do {
    			cout<<endl<<"----EDITANDO----"<<endl;
        	cout<<endl<<"1 - Ver lista de nomes"<<endl;
        	cout<<endl<<"2 - Alterar nome"<<endl;
        	cout<<endl<<"3 - Voltar"<<endl;
        	cin >> resposta;
	    			if (cin.fail()) 
					{
	    			    cin.clear();
	    			    cin.ignore();
    				    cout << "Digite apenas numeros!  \n"<< endl;
    				    system("pause");
						system("cls");
    				}
    				else
        			check = true;
        	
			}while(!check);
        	
        	
      	
        	switch (resposta) {
        	    
        	    case 1:
        	    {
                	contadorMenu2 = 0;              	
                	apresentaNome(cadastroDeCampeoes);
                	system("pause");
                	break;
                }
				
				case 2:
        	    {
                	cout<<"Que nome voce quer alterar?: "<<endl;
                	cin>>nome;
                	
                	int contador = 0;
                	while(contador < cadastroDeCampeoes.size()){
                		
                		if(cadastroDeCampeoes[contador].getNomeCampeao()==nome){
                			string novoNome;
                			system("cls");
                			cout<<"Digite o novo nome: "<<endl;
                			cin>>novoNome;
                			
                			cadastroDeCampeoes[contador].setNomeCampeao(novoNome);
                			
                			cout<<"Nome alterado! "<<endl;
                			system("pause");
                		}
                		
                		else{
                			system("cls");
                			
						}
                		
                		contador++;
                	}
                	
                	contadorMenu2 = 3;
                	break;
                }
                
                default:
        		{
        			contadorMenu2 = 3;
        			break;
				}
        	}
        
        
        
        
        
	} while (contadorMenu2 != 3);
	
	
    
	system("cls"); 
	break;
  }
    
  default:{
  	contadorMenu = 3;
	break;
  }
    
}
   
}
while (contadorMenu != 3);

return 0;
}





