#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    cout << fixed << setprecision(3);
	int distancia;
	double combustivel;
	cin>>distancia>>combustivel;
	double consumo = distancia/combustivel;
	cout<<consumo<<" km/l"<<endl;
	return 0;
}
