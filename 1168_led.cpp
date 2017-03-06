#include <iostream>
#include <cstring>

using namespace std;

int main() {

    int num, soma, aux;
    string numero;
    int valores[10] = {6,2,5,5,4,5,6,3,7,6};
    cin >> num;
    for(int i = 0; i < num; i++){
   soma = 0;
   cin >> numero;
   int tamanho = numero.size();
   for(int j = 0; j < tamanho; j++){
   aux = numero[j] - 48;
   soma += valores[aux];
  }
  cout << soma << " leds" << endl;
 }
 return 0;
}
