// Alunos: João Victor Fernandes Cabral e Eric Andrade Siqueira

#ifndef JOGO
#define JOGO
#define MAX 5

#include "jogador.h"

using namespace std;

class Jogo
{
private:
  	int numInativos = 0;
	int numJogadores = 0;
	Jogador jogando[MAX];
	bool acabou = false;
  	Jogador vencedor = {};
public:
	Jogo();
	~Jogo();

	void adicionaJogador();
  	void verificaSeAcabou();
	void rodada();
  	void anunciaVencedor();
  	bool verificaPararamTodos();
  	void achaMaior();
  	void restaUm();
  	bool getAcabou();
  	Jogador encontraVencedor();
};

#endif