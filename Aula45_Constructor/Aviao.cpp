#include <iostream>
//associar a classe criada com o header
#include "Aviao.h"

using namespace std;

int main(){
	//Agora existe o método constructor, então
	//ao instânciar é passado o valor nos parametros 
	//do método Aviao()
	Aviao *av1 = new Aviao(3);
	Aviao *av2 = new Aviao(1);
	Aviao *av3 = new Aviao(2);

	av1->imprimir();
	av2->imprimir();
	av3->imprimir();
	return 0;
}