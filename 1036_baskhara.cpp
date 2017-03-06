#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double a,b,c,delta,e,f,g;
    cin>>a>>b>>c;
    delta=b*b-4*a*c;
    e=pow(delta,0.5);
    if(delta<0||a==0){
        cout<<"Impossivel calcular\n";
      }else{
        f=(-b+e)/(2*a);
        g=(-b-e)/(2*a);
        cout<< "R1 = "<<f<<endl;
        cout<< "R2 = "<<g<<endl;
    }
    return 0;
}
