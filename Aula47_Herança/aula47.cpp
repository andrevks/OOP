#include<iostream>
#include "classes.h"

using namespace std;

int main()
{
	Moto * m1 = new Moto();
	cout<< "Rodas: "<<m1->rodas<<endl;
	cout<<	"Blindagem: "<<m1->blind<<endl;
	cout<<"Velocidade: "<<m1->vel<<endl;

	m1->imprimir();
	return 0;
}
