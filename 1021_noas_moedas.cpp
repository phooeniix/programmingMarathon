#include <iostream>

using namespace std;

int main(){

	int i;
	double valor;
	int valorInt;

	int notas[] = { 100, 50, 20, 10, 5, 2, 1 };
	int moedas[]  = { 50, 25, 10, 5, 1 };

	cin >> valor;

	valorInt = valor;

	valor -= valorInt;


	cout << "NOTAS:\n";
	for(i = 0; i < 6; i++){
			cout << valorInt/notas[i] << " nota(s) de R$ " << notas[i] << ".00\n";
		valorInt %= notas[i];
	}

	cout << "MOEDAS:\n";

	cout << valorInt/notas[i] << " moeda(s) de R$ " << notas[i] << ".00\n";
	valor *= 100;
	valorInt = valor;

	for(i = 0; i < 5; i++){
		if(moedas[i] >= 10)
			cout << valorInt/moedas[i] << " moeda(s) de R$ 0." << moedas[i] << "\n";
		else
			cout << valorInt/moedas[i] << " moeda(s) de R$ 0.0" << moedas[i] << "\n";
		valorInt %= moedas[i];
	}
}
