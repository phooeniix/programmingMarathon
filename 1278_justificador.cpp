#include <iostream>
#include <string>
using namespace std;
int main(){
  int n, nL=0;
  cin>>n;
  cin.get();
  string *vet = new string[n];
  for(int i=0;i<n;i++){
    getline(cin, vet[i]);
    if(vet[i].size()>nL){
      nL = vet[i].size();
    }
  }
  int aux = 0, aux2=0;
  for(int i=0;i<n;i++){
    int aux = vet[i].size();
    int aux2 = nL-aux;
    for(int j=0;j<aux2;j++)
      vet[i]=' '+vet[i];
  }
  for(int i=0;i<n;i++){
    cout<<vet[i]<<endl;
  }
return 0;
}
