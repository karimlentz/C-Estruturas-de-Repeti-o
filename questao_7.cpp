#include <iostream>
#include <fstream>

using namespace std;

int main() {
	
	string arquivo;
	cin >> arquivo;
	
	int cont = 0, n, anterior = 0;
	
	ifstream entrada(arquivo);
	while (entrada >> n){
		if( n == (2 * anterior)){
			cont ++;
		}
		anterior = n;
	}
	
	entrada.close();
	
	ofstream saida("dobro.txt");
	saida << cont << endl;
	
	saida.close();
	
    return 0;
}
