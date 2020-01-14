#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED



/*Veículo será uma classe genérica para todo 
tipo de veículo, apartir dela serão criadas
outras caracteristicas especificas*/

class Veiculo{
public:
	int vel;
	int blind;
	int rodas;
	void setTipo(int tp);
	void setVelMax(int vm);
	void setArma(bool ar);

	int getTipo();
	int getVelMax();
	bool getArma();
	
	void imprimir();
private:
	int tipo;//1=moto;2=carro;3=caminhão;4=tanque
	int velMax;
	bool arma;

	
};

void Veiculo::setTipo(int tp){
	tipo = tp;
}

void Veiculo::setVelMax(int vm){
	velMax = vm;
}

void Veiculo::setArma(bool ar){
	arma = ar;
}

int Veiculo::getTipo(){
	return tipo;
}

int Veiculo::getVelMax(){
	return velMax;
}
bool Veiculo::getArma(){

	return arma;
}

void Veiculo::imprimir(){

	std::cout << "Tipo: " << getTipo() << std::endl;
	std::cout << "rodas: " << rodas << std::endl;
	std::cout << "Blindagem: " << blind << std::endl;
	std::cout << "Velocidade atual: " << vel << std::endl;
	std::cout << "Velocidade Max: "<< getVelMax()<< std::endl;
	std::cout << "Armamento: "<< getArma()<< std::endl;
	std::cout << "-- || -- || -- || -- || -- ||"<< std::endl;
}
/* A herança é quando uma classe herda propri-
edades de outra*/
class Moto: public Veiculo{
	//Moto possui todas as caracteristicas
	//da classe Veiculo
public:
	Moto();
};

Moto::Moto(){
	vel = 	0;
	blind =0;
	rodas = 2;
	

	setTipo(1);
	setVelMax(150);
	setArma(false);

}

//nova classe carro herdando as propriedades
//da classe Veiculo
class Carro: public Veiculo{

public:
	Carro();
};

Carro::Carro(){
	vel = 0;
	blind =0;
	rodas = 4;
	

	setTipo(2);
	setVelMax(180);
	setArma(false);

}

//nova classe caminhão
class Tanque:public Veiculo{
public:
	Tanque();
};

Tanque::Tanque(){
	vel = 0;
	blind = 1;
	rodas = 8;
	

	setTipo(4);
	setVelMax(200);
	setArma(true);
}

#endif//CLASSES_H_INCLUDED
