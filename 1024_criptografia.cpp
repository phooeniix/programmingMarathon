#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;
void inverte(string &frase, int n){
	for (int i=0;i<n/2;i++){
		char c = frase[i];
		frase[i] = frase[n-1-i];
		frase[n-1-i] = c;
	}
}
int main(){
	int n;
	cin>>n;
	cin.get();
	for(int i=0;i<n;i++){
		string x;
		getline(cin, x);
		string aux_final;
		int tamanho = x.length();
		for(int i=0;i<tamanho;i++){
			int aux;
			if (isalpha(x[i])){
				aux = x[i];
				aux_final+= aux+3;
			}else{
			    aux_final+=x[i];
			}
		}
		inverte(aux_final, tamanho);
		for(int i=(tamanho/2);i<tamanho;i++){
			int aux;
				aux = aux_final[i];
				aux_final[i] = aux-1;
		}
		cout<<aux_final<<endl;
	}

	return 0;
}
