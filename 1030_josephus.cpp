#include <iostream>
using namespace std;

}
int josephus(int n,int k){
      if(n==1)
      return 1;
      else
      return (josephus(n-1,k)+k-1)%n+1;
}
int main(){
  int n, resposta;
  cin >> n;
  while{
    int passo, pessoas=3;
   	cin >> pessoas;
	  cin >> passo;
    bool vivo_morto[pessoas];
    for(int k=0;k<pessoas;k++)
      vivo_morto[i] = false;
    loop(vivo_morto, pessoas,passo, 0, 0);
    for(int k=0;k<pessoas;k++)
      if(vivo_morto[k])
        resposta = k;
    //std::cout << "Case " << i+1<< ": "<< std::resposta << std::endl;
    cout<<"Case "<<i+1<<": "<<resposta<<endl;
  }
  return 0;
}
