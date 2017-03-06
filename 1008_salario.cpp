#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << fixed << setprecision(2);
    int number, horas;
    double valorH;
    cin>>number>>horas>>valorH;
    double salario = horas * valorH;
    cout<<"NUMBER = "<<number<<endl;
    cout<<"SALARY = U$ "<<salario<<endl;
	return 0;
}
