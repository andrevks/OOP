/*Data:tue,jan 14th,2020.André Geraldo, Eng. da computação.
Algoritmo simples para demonstração do paradigma de POO
usando C++. O objetivo é criar métodos Get e Sete o entendimento 
do uso do Public e Private*/

#include<iostream>
#include "classes.h"

using namespace std;

int main()
{
	Veiculo *v1 = new Veiculo(3);
	Veiculo *v2 = new Veiculo(1);
	Veiculo *v3 = new Veiculo(2);
	

	// cout<<"VelMax: "<<v2->velMax<<endl;
	// v2->velMax = 300;
	// cout<<"VelMax: "<<v2->velMax<<endl;
	//v2->setVelMax(666);

	cout<< "VelMax: "<< v1->getVelMax()<<endl;
	cout<< "VelMax: "<< v2->getVelMax()<<endl;
	cout<< "VelMax: "<< v3->getVelMax()<<endl;


	cout<<v1->getLigado()<<endl;
	cout<<v2->getLigado()<<endl;
	cout<<v3->getLigado()<<endl;

	cout<<"-----------------"<<endl;
	v1->setLigado(1);
	v2->setLigado(0);
	v3->setLigado(1);

	cout<<v1->getLigado()<<endl;
	cout<<v2->getLigado()<<endl;
	cout<<v3->getLigado()<<endl;


	return 0;
}