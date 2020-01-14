#include<iostream>

using namespace std;
class Carro{
public:
	int velMax;
	int potencia;
	const char * nome;
	//constructor
	Carro(const char * n, int p){

		this->nome = n;
		this->potencia =p;

		if(p<100){
			this->velMax =120;
		}else
			 if(p<200){
			this->velMax = 240;
		}else{
			this->velMax = 360;
		}
	}
};


int main(){

	Carro *c1 = new Carro("Ferrari",300);
	cout<<"Nome: "<<c1->nome<<", potencia:"<<c1->potencia <<", velMax: "<<c1->velMax<<endl;


	delete c1;//desalocar o objeto
	return 0;
}