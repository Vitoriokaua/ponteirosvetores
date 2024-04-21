#include <iostream>

using namespace std;



//Escreva um programa que receba dois vetores de inteiros de mesmo tamanho e crie um terceiro vetor que 
//armazene a soma dos elementos correspondentes dos dois vetores de entrada.




void preencher_vetor(int* v, int tam) {
	for (int i = 0; i < tam; i++){
		cout << "informe os numeros: ";
		cin >> v[i];
	}
	

}

void somar_vetores(int * v, int * v1, int tam, int * sm) {
	
	for (int i = 0; i < tam; i++){
		sm [i]= v[i] + v1[i];

	}



}













int main() {
	const int tam = 10;
	int vetor[tam], vetor2[tam];
	int soma[tam];

	preencher_vetor(vetor, tam);
	preencher_vetor(vetor2, tam);


	somar_vetores(vetor, vetor2, tam, soma);
	
	cout << "A soma dos dois vetores e: ";
	for (int i = 0; i < tam; ++i)
	{
		cout << soma[i] << " ";
	}
	cout << endl;


}