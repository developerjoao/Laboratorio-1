// Alunos: João Victor Fernandes Cabral e Eric Andrade Siqueira


#include <iostream>
#include "empresa.h"
using namespace std;

int Funcionario::totalFuncionarios=0;
int Empresa::totalEmpresas=0;

int main(){
	Empresa empresas[MAX];
	Funcionario temp;
	int option = -1, rodando =1;
	float  porcento =0;
	cout<<"Bem vindo ao administrador de empresas."<<endl;
	while(rodando){
		cout<<"Você deseja:"<<endl;
		cout<<"(1) Criar empresa."<<endl;
		cout<<"(2) Adicionar um funcionário à sua empresa."<<endl;
		cout<<"(3) Listar os funcionários da sua empresa."<<endl;
		cout<<"(4) Dar um aumento para todos os seus funcionários."<<endl;
		cout<<"(5) Listar os funcionários em período de experiência."<<endl;
		cout<<"(6) Mostrar a média de funcionários por empresa."<<endl;
		cout<<"(7) Sair do programa."<<endl;
		cin>> option;
		system("clear");
		if(option == 1){
			cin>>empresas[Empresa::totalEmpresas];
			cout<<"O número da sua empresa é: "<<Empresa::totalEmpresas<<" Guarde para futuras operações."<<endl;
			Empresa::totalEmpresas++;
			option = -1;
		}
		else if(option == 2){
			cout<<"Digite o número da sua empresa: ";
			cin>>option;
			cout<<"Dados do funcionário:"<<endl;
			cin>>temp;
			empresas[option].addFuncionario(temp);
			Funcionario::totalFuncionarios++;
			option = -1;
		}
		else if(option ==3){
			cout<<"Digite o número da sua empresa: ";
			cin>>option;
			cout<<empresas[option];
			option = -1;
		}
		else if(option == 4){
			cout<<"Digite o número da sua empresa: ";
			cin>>option;
			cout<<"Digite quanto você quer dar de aumento para seus funcionários(em %): ";
			cin>>porcento;
			porcento = porcento/100;
			empresas[option].aumentoGeral(porcento);
			option = -1;
		}
		else if(option == 5){
			cout<<"Digite o número da sua empresa: ";
			cin>>option;
			empresas[option].listaExperiencia(empresas[option]);
			option = -1;
		}
		else if(option == 6){
			cout<<"A média de funcionarios por empresa é de: ";
			cout<<Funcionario::totalFuncionarios/Empresa::totalEmpresas<<endl;
		}
		else if(option == 7){
			rodando = 0;
		}
	}
	return 0;
}