#include <iostream>
#include <iomanip>
#include <cmath>
	
using namespace std;
	
int main() {
    cout << fixed << setprecision(3);
    int time, velocidade;
    cin>>time>>velocidade;
    double aux = time * velocidade;
    double consumo = aux /12;
    cout<<consumo<<endl;
	return 0;
}
