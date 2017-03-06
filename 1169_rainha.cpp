#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int n;
    cin>>n;
    long long int totalGraos = 1;
    for(int j= 0;j<n;j++){
		int in;
		cin>>in;
		totalGraos = 1;
			// totalGraos=totalGraos<<(in)/1200;
      totalGraos = (pow(2,in)/12000);
      //totalGraos*=2;
    //totalGraos/=(12000);
		cout<< totalGraos<<" kg"<<endl;
	}

    return 0;
}
