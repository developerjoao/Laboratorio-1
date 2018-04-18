// Alunos: João Victor Fernandes Cabral e Eric Andrade Siqueira

#include "jogo.h"
#include <iostream>

using namespace std;

Jogo::Jogo(){

}

Jogo::~Jogo(){

}

bool Jogo::getAcabou(){
	return acabou;
}

//Define os jogadores e o valor limite.
void Jogo::adicionaJogador(){
	int jogadores, valor;
 	string nomeJogador;
  	cout<<"Diga a quantidade de jogadores(máximo de 5):";
  	cin>>jogadores;
 	while(jogadores>5){
 		cout<<"Quantidade de jogadores maior que 5. Digite novamente: ";
 		cin>>jogadores;
 	}
    	
  	for(int i=0; i<jogadores;i++){
		cout<<"Nome do jogador:";
		cin>>nomeJogador;
    	jogando[i].setNome(nomeJogador);
    	numJogadores++;
  	}
  	cout<<"Digite o valor limite:";
  	cin>>valor;
  	jogando[0].setValorLimite(valor);
}

//Verifica se as condições de parada são satisfeitas.
void Jogo::verificaSeAcabou(){
  	for(int i=0; i<numJogadores;i++){
      	if(jogando[i].getVenceu()==true){
          	vencedor = jogando[i];
          	acabou = true;//se acertaram o MAX acaba o jogo;
          	return;
        }else if(Jogo::verificaPararamTodos()){
          	Jogo::achaMaior();
          	return;
        }else if(jogando[i].getEstourou()==true){
          	numInativos++;
        }
    }
  	if(numInativos == numJogadores-1){
        Jogo::restaUm();
        acabou = true;
    } 
    else if(numInativos == numJogadores){
    	cout<<"Que pena, enhum jogador venceu."<<endl;
    }
  	return;
}

//Checa se há somente um jogador.
void Jogo::restaUm(){
	for(int i=0; i<numJogadores; i++){
    	if(jogando[i].getEstourou()==false){
          	jogando[i].setVenceu(true);
          	vencedor = jogando[i];
        }
    }
}


//Checa se todos pararam para finalizar o programa.
bool Jogo::verificaPararamTodos(){
  	int numParados=0;
	for(int i=0; i<numJogadores; i++){
    	if(jogando[i].getParou()==true){
        	numParados++;
        }
    }
  	if(numParados == (numJogadores-numInativos)){
    	acabou = true;
      	return true;
    }else{ 
    	return false;
    }
}

//Salva o maior valor para definir o vencedor.
void Jogo::achaMaior(){
  	int maior =0;
  	for(int i=0; i<numJogadores; i++){
  		if(jogando[i].getValorAcumulado() > maior){
          	maior = jogando[i].getValorAcumulado();
        }
  	}
  	for(int i=0; i<numJogadores; i++){
      	if(maior == jogando[i].getValorAcumulado()){
          	jogando[i].setVenceu(true);
          	vencedor = jogando[i];
          	acabou = true;
          return;
        }
    }
}

void Jogo::anunciaVencedor(){
  	cout<< vencedor.getNome() <<" é o vencedor! Com "<< vencedor.getValorAcumulado() << " pontos" << endl;
  	return;
}

void Jogo::rodada(){
  	if(acabou==false){
  		for(int i=0; i<numJogadores;i++){
      		if(jogando[i].getEstourou() == false){
      		  	jogando[i].vezDeJogar(); 
   		     }
	    }
	}else{
		if(numInativos == numJogadores){
			return;
		}
    	Jogo::anunciaVencedor();
      	return;
    }
  	Jogo::verificaSeAcabou();
}