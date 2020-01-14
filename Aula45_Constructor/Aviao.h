#ifndef AVIAO_H_INCLUDED
#define AVIAO_H_INCLUDED

class Aviao{
public:
	int vel =0;
	int velMax;
	//como não foi usado namespace std:
	std::string tipo;
	//o constructor deve ter o nome da classe
	Aviao(int tp);
	void imprimir();
private:
};

//A função do constructor é interessante,pois
//ao instânciar um novo objeto, o método já é 
//executado 

Aviao::Aviao(int tp){

	//Não é necessário o "this" dessa vez
	//pois já estamos no método constructor
	switch(tp){
		case 1:
			
			tipo = "Jato";
			velMax = 800;
		break;
		case 2:
			tipo = "Monomotor";
			velMax = 350;
		break;	
		case 3:
			tipo = "Planador";
			velMax = 180;
		break;
		default:
			tipo = "Desconhecido";
			velMax = 50;
		break;
	}
}

void Aviao::imprimir(){
	std::cout<<"Tipo: "<< tipo <<std::endl;
	std::cout<<"VelMax: "<<velMax<< std::endl;
	std::cout<<"VelAtual: "<<vel<<std::endl;
	std::cout<<"----------------------"<<std::endl;
}

#endif//AVIAO_H_INCLUDED