#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
void dancing(string &aux,int tamanho){
	for(int i =0;i<tamanho;i++){
		if(i%2==0){
			if(isalpha(aux[i])){
				if(!isupper(aux[i])){
					aux[i] = toupper(aux[i]);
				}
			}
		}else{
			if(isalpha(aux[i])){
				if(isupper(aux[i])){
					aux[i] = tolower(aux[i]);
				}
			}
		}
	}
}
int main(){
	int tamanho;
	string aux;
    while(getline(cin, aux)){
      tamanho = aux.size();
      dancing(aux, tamanho);
      cout<<aux<<endl;
    }
    return 0;
}
