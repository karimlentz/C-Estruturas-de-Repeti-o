#include <iostream>
#include <fstream>

using namespace std;

int main(){
	
	int capacidade = 10;
	int* numeros = new int[capacidade];
	int tamanho = 0;
	int valor;
	
	ifstream entrada("entrada.txt");
	
	while (entrada >> valor){
		if (valor >=0){
			// se vetor cheio
			if (tamanho == capacidade){
				// copiamos os dados antigos para o novo vetor
				int* novo = new int[capacidade * 2];
				for (int i = 0; i < capacidade; i++){
					novo[i] = numeros [i];
				}
				// liberamos o vetor antigo
				delete[] numeros;
				// atualiza
				numeros = novo;
				capacidade *= 2;
			}
			// armazena o número lido e incrementamos tamanho
			numeros[tamanho++] = valor;
		}
	}
	
	//compara os dois primeiros valores para definir o menor e o segundo menor
	int menor, segundoMenor;
	if (numeros[0] < numeros[1]){
		menor = numeros[0];
		segundoMenor = numeros[1];
	} else {
		menor = numeros[1];
		segundoMenor = numeros[0];
	}
	
	//compara os dois primeiros valores para definir o maior e o segundo maior
	int maior, segundoMaior;
	if (numeros[0] > numeros [1]){
		maior = numeros[0];
		segundoMaior = numeros[1];
	} else {
		maior = numeros[1];
		segundoMaior = numeros[0];
	}
	
	// percorremos o resto do vetor
	for (int i = 2; i < tamanho; i++){
		// numero atual sendo analizado
		int atual = numeros[i];
		// atualiza menores
		if (atual < menor){
			segundoMenor = menor;
			menor = atual;
		} else if (atual < segundoMenor){
			segundoMenor = atual;
		}
		// atualiza maiores
		if (atual > maior){
			segundoMaior = maior;
			maior = atual;
		} else if (atual > segundoMaior){
			segundoMaior = atual;
		}
	}
	
	cout << menor << endl << segundoMenor << endl << maior << endl << segundoMaior << endl;
	
	delete[] numeros;
		
return 0;
}
