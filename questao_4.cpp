#include <iostream>
#include <fstream>

using namespace std;

int main() {
    
    int qnt, cont = 0;
    string nome;
    float p1, p2, media;
    
    ifstream entrada("entrada.txt");
    entrada >> qnt;
    
    ofstream saida("saida.txt");
    
    while ( qnt > cont){
		entrada >> nome >> p1 >> p2;
		media = (p1 + p2)/2;
		if (media < 7.0){
			saida << nome << endl;
		}
		qnt--;
	}
	
	entrada.close();
	saida.close();
 
    return 0;
}
