<<<<<<< HEAD
// Alunos: João Victor Fernandes Cabral e Eric Andrade Siqueira

#ifndef JOGADOR
#define JOGADOR

#include<string>

using namespace std;

class Jogador
{
private:
	static int valorLimite;
	string nome;
	bool estourou = false;
	int valorAcumulado = 0;
  	bool venceu = false;
  	bool parou = false;
public:
	Jogador();
	~Jogador();
	
	static void setValorLimite(int);

	string getNome();
	void setNome(string);
	bool getEstourou();
  	bool getVenceu();
  	int getValorAcumulado();
  	bool getParou();
  	void setVenceu(bool);
	void vezDeJogar();
	void jogarDados();
};

#endif
=======
#ifndef JOGADOR
#define JOGADOR

using namespace std;

class Jogador
{
private:
	static int valorLimite;
	string nome;
	bool estourou = false;
	int valorAcumulado = 0;
public:
	Empresa();
	~Empresa();
	
	static void setValorLimite(int);

	string getNome();
	void setNome(string);
	bool getEstourou();
	void vezDeJogar();
	void jogarDados(){
	friend ostream &operator<<(ostream, Jogador);
};

#endif
>>>>>>> 2c4322dc7c64adbac0110d657b5e3dc46765ea59
