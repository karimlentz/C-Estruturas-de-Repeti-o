#include <iostream>
#include <fstream>

using namespace std;

int main() {
	
	string arquivo;
	char letra;
	int cont = 0;
	
	cin >> arquivo;
	
	ifstream entrada(arquivo);
	while (entrada >> letra){
		if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
			cont++;
		}	
		if (letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U'){
			cont++;
		}	
	}
	
	cout << cont << endl;
	
    return 0;
}
