#include <iostream>

using namespace std;

int main() {
  int maior, menor;
  int a, b;
  cin>>a>>b;
  if(a>b){
    maior = a;
    menor = b;
  }else{
    maior = b;
    menor = a;
  }
  menor+=1;
  int soma = 0;
  for(int i=menor;i<maior;i++){
    if(i%2!=0){
      soma+=i;
    }
  }
  cout<<soma<<endl;
    return 0;
}
