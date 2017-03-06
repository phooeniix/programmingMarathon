#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
 
int main() {
    cout << fixed << setprecision(3);
    int r;
    double pi = 3.14159;
    cin>>r;
    double esfera = (4.0/3)*pi*(pow(r, 3));
    
    cout<< "VOLUME = "<<esfera<<endl;
	return 0;
}
