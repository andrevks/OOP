#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED
class Veiculo{
public:
	int vel;
	int tipo;
	Veiculo(int tp);//constructor
	int getVelMax();
	bool getLigado(); 
	bool setLigado(int lig);

private:
	//Apenas podem ser manipulados pela própria
	//classe, então é necessário criar métodos
	//para acessar os dados desses elementos
	std::string nome;
	int velMax;
	bool ligado;
	
	//como não quero permitir a mudança
	//da velocidade
	void setVelMax(int velMax);
		
};
bool Veiculo::setLigado(int lig){


	if(lig){
	 	return ligado =true;
	}
	if(lig == 0){
		return ligado = false;
	}
	
}

bool Veiculo::getLigado(){
	return ligado;
}

void Veiculo::setVelMax(int velMax)
{
	this->velMax = velMax;
}

int Veiculo::getVelMax()
{
	return velMax;
}
Veiculo::Veiculo(int tp)
{
	switch(tp){
		case 1:
			
			nome = "Carro";
			// velMax = 200;
			setVelMax(200);
		break;
		case 2:
			nome = "Avião";
			// velMax = 800;
			setVelMax(800);
		break;	
		case 3:
			nome = "Navio";
			// velMax = 120;
			setVelMax(120);
		break;
		default:
			nome = "Desconhecido";
			// velMax = 50;
		break;
	}

	setLigado(0);
	//ou ligado =false
}



#endif// CLASSES_H_INCLUDED
