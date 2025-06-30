#include <iostream>
#include <fstream>

using namespace std;

int main() {
	
	int qtd, produz, vend, cont = 0, estoque, maior = 0;
	string nome, prodMaior;
	
	ifstream entrada("estoque.txt");
	entrada >> qtd;
	
	while (qtd > cont){
		entrada >> nome >> produz >> vend;
		estoque = produz - vend;
		cout << nome << endl << estoque << endl ;
		if (estoque > maior){
			maior = estoque;
			prodMaior = nome;
		}		
		if (estoque < 50){
			cout << "BAIXO ESTOQUE" << endl;
		}
		qtd --;
	}
	
	cout << prodMaior << " " << maior << endl;
 
    return 0;
}
