#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
 
int main() {
    cout << fixed << setprecision(2);
    string nome;
    double salario, total;
    cin>>nome>>salario>>total;
    double sf = salario + 0.15*total;
    cout<<"TOTAL = R$ "<<sf<<endl;
	return 0;
}
