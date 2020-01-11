#include <iostream>

using namespace std;


class Aviao{
public:
	int velInicial = 0;
	int velMax;

	string tipo;

	void ini(int tp);
	void obterTipo();
	void obterVelMax();

private:

};

//contruir o método ini, deve ser feito fora da class
//primeiro indico qual classe e indicar o método
//a ser construído

void Aviao::ini(int tp){

	switch(tp){
		case 1:
			this->tipo = "Jato";
			this->velMax = 800;
		break;
		case 2:
			this->tipo = "Monomotor";
			this->velMax = 350;
		break;
		case 3:
			this->tipo = "Planador";
			this->velMax = 180;
		break;
		default:
			this->tipo = "Desconhecido";
	}
	
}

void Aviao::obterTipo(){
	cout<< "Tipo: "<< this->tipo<<endl;
}
void Aviao::obterVelMax(){
	cout<<"velMax: "<< this->velMax<<endl;
}

int main() {
	//Criando novo objeto do tipo Aviao
	//É necessário criar como ponteiro
	Aviao *av1 = new Aviao();
	Aviao *av2 = new Aviao();

	cout<<"Velocidade = "<< av1->velInicial<<"\n";

	av1->ini(2);
	av1->obterTipo();
	av1->obterVelMax();

	av1->ini(3);
	av1->obterTipo();
	av1->obterVelMax();

	return 0;
}