#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main() {
    
    int n = 0, num;
    
    ifstream entrada("senha.txt");
    entrada >> num;
    entrada.close();
    
    ofstream saida("saida.txt");
    
    int merse = 0;
    
    while (merse <= num){
		saida << merse << " ";
		n++;
		merse = ((pow(2,n)-1));
	}
	
	saida.close();
 
    return 0;
}
