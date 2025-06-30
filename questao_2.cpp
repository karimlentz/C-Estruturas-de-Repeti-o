#include <iostream>
#include <fstream>

using namespace std;

int main() {
    
    int n;
    
    ifstream entrada("entrada.txt");
    entrada >> n;
    
    int triangulo;
    triangulo = ((n*(n+1))/2) ;
    
    ofstream saida("saida.txt");
    saida << triangulo << endl;
    
    entrada.close();
    saida.close();
    
    return 0;
}
