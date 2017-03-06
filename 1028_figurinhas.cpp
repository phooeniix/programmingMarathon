#include <iostream>
using namespace std;
int MDC(int a, int b){
  int resto;

  while(b != 0){
    resto = a % b;
    a = b;
    b = resto;
  }

  return a;
}
int main(){
	int m;
	cin>>m;
	for(int i=0;i<m;i++){
		int a, b;
		cin>>a>>b;
		cout<<MDC(a,b)<<endl;
	}
	return 0;
}
