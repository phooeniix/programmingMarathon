#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
 
int main() {
    cout << fixed << setprecision(3);
    double a , b , c;
    cin>>a>>b>>c;
    double t = ((a*c)/2);
    double pi = 3.14159;
    double ci = pow(c,2)*pi;
    double tr = ((a + b)*c)/2;
    double q = pow(b, 2);
    double r = a*b;
    
    cout<< "TRIANGULO: "<<t<<endl;
    cout<< "CIRCULO: "<<ci<<endl;
    cout<< "TRAPEZIO: "<<tr<<endl;
    cout<< "QUADRADO: "<<q<<endl;
    cout<< "RETANGULO: "<<r<<endl;
	return 0;
}
