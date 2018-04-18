<<<<<<< HEAD
// Alunos: João Victor Fernandes Cabral e Eric Andrade Siqueira

#include "jogador.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>  

using namespace std;

Jogador::Jogador(){}
Jogador::~Jogador(){}

void Jogador::setNome(string novoNome){
	nome = novoNome;
}

void Jogador::setValorLimite(int valor){
	valorLimite = valor;
}

string Jogador::getNome(){
	return nome;
}

bool Jogador::getParou(){
  	return parou;
}

bool Jogador::getEstourou(){
	return estourou;
}

int Jogador::getValorAcumulado(){
	return valorAcumulado;
}

void Jogador::setVenceu(bool _venceu){
	venceu = _venceu;
}

bool Jogador::getVenceu(){
	return venceu;
}

void Jogador::jogarDados(){
	srand(time(NULL));
	int dado1 = (rand()%6) +1;
	valorAcumulado += dado1;
	int dado2 = (rand()%6) +1;
	valorAcumulado += dado2;
	cout << "Você tirou " << dado1 << " no primeiro dado ";
	cout << "e " << dado2 << " no segundo dado "<< endl;
	cout << "Agora você está com " <<valorAcumulado << " pontos"<<endl<<endl;
}

//Define se o jogador vai jogar ou não e as aplicações de tal.
void Jogador::vezDeJogar(){
  	parou = false;
	cout<< "vez do(a) " << nome << " jogar"<<endl;
	char opt;
	cout<<"deseja jogar nesta rodada? (s/n)"<<endl;
	cin>>opt;
	while(opt != 'n' && opt != 's'){
		cout<<"Valor invalido. Digite novamente: ";
		cin>>opt;
	}
	if (opt == 'n'){ 
		cout<< "Você escolheu não jogar essa rodada!"<<endl;
		cout<< nome <<" tem "<< valorAcumulado <<" pontos"<<endl<<endl;
      	parou = true;
		return;
	}

	if(opt == 's'){
		cout<<"Você escolheu jogar essa rodada!"<<endl;
		jogarDados();
	}	
	
	if(valorAcumulado > valorLimite){
		estourou = true;
		valorAcumulado = 0;
		cout << "Você passou do valor limite "<< endl;
		cout << "Você foi eliminado"<<endl<<endl;
		return;
	}else if( valorAcumulado == valorLimite){
		cout << "Sua pontuação é exatamente igual ao limite"<< endl;
		cout << "Parabéns, você ganhou!"<<endl;//TRANSFERIR PARA JOGO
      	venceu = true;
		return;
	}
}
=======
#include "jogador.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>  
#include <jogador.h>

using namespace std;

Jogador::Jogador(){}
Jogador::~Jogador(){}

void Jogador::setNome(string novoNome){
	nome = novoNome;
}

string Jogador::getNome(){
	return nome;
}

bool Jogador::getEstourou(){
	return estourou;
}

int Jogador::getValorAcumulado(){
	return valor acumulado;
}

void Jogador::jogarDados(){
	srand(time(NULL));
	int dado1 = (rand()%6) +1;
	valorAcumulado += dado1;
	int dado2 = (rand()%6) +1;
	valorAcumulado += dado2;
	cout << "Você tirou " << dado1 << "no dado 1 ";
	cout << "e " << dado2 << "no dado 2"<< endl;
	cout << "Agora você está com" <<valorAcumulado << "pontos";
}


bool Jogador::vezDeJogar(){//retorna true se o jogo acabou, e false caso contrário
	cout<< "vez do(a)" << nome << "jogar";
	char opt = 'a';
	cout<<"deseja jogar nesta rodada? (s/n)"<<endl;
	while(opt!='s'||opt='n'){
		cin>>opt;
		if(opt!='s'&&opt!='n'){
			cout<<"opção inválida, escolha s: Sim ou n: Não"<< endl;
		}
	}

	if (opt = 'n'){ 
		cout<< "Você escolheu não jogar essa rodada!"<<endl;
		cout<< "Você tem "<< valorAcumulado <<" pontos";
		return false;
	}

	if(opt = 's'){
		jogarDados();
	}	
	
	if(valorAcumulado > valorLimite){
		estourou = true;
		cout << "Você passou do valor limite "<< endl;
		cout << "Fim da sua rodada"<<endl;
		return false;
	}else if( valor acumulado == valorLimite){
		cout << "Sua pontuação é exatamente igual ao limite"<< endl;
		cout << "Parabéns, você ganhou!"
		return true;
	}
	
}
>>>>>>> 2c4322dc7c64adbac0110d657b5e3dc46765ea59
