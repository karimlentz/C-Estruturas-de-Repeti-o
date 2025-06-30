#include <iostream>
#include <fstream>

using namespace std;

int main() {
	
	float valor, valorTotal, valorAtual;
	int dia;
	char cat;
	
	ifstream entrada("ingresso.txt");
	entrada >> valor;
	
	while( entrada >> dia >> cat){
		
		valorAtual = valor;
		
		if((dia >= 6) && (dia<=13)){
			if (cat == 'E'){
				valorAtual -= 0.15 * valor;
				valorTotal += valorAtual;
			} else if ( cat == 'A'){
				valorAtual -= 0.10 * valor;
				valorTotal += valorAtual;
			}
			
		}else if((dia >= 14) && (dia<=24)){
			if (cat == 'E'){
				valorAtual -= 0.10 * valor;
				valorTotal += valorAtual;
			} else if ( cat == 'A'){
				valorAtual -= 0.05 * valor;
				valorTotal+= valorAtual;
				}
		}else {
			valorTotal += valorAtual;
		}
	}
	
	entrada.close();

	cout << valorTotal << endl;
	
    return 0;
}
