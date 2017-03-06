#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
    cout << fixed << setprecision(2);
    int cod1, cod2, qt1, qt2;
    double v1, v2, vt;
    cin>>cod1>>qt1>>v1;
    cin>>cod2>>qt2>>v2;
    vt = (v1*qt1) + (v2*qt2);
    cout<< "VALOR A PAGAR: R$ "<<vt<<endl;
	return 0;
}
