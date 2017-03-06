#include <iostream>
#include <iomanip>
#include <cmath>
	
using namespace std;
 
int main() {
    cout << fixed << setprecision(4);
    double x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    double dist = sqrt(pow((x2-x1),2) + pow((y2-y1),2));
    cout<<dist<<endl;
	return 0;
}
