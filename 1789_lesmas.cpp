#include <iostream>
using namespace std;
int main() {
    int n, maior = -1;
    cin>>n;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		if(x>maior){
			maior = x;
		}
	}
	if(maior<10 and maior>=0){
		cout<<1;
	}else if(maior>10 and maior<20){
		cout<<2;
	}else{
		cout<<3;
	}
	return 0;
}
