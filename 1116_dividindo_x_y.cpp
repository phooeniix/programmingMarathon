#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  cout << fixed << setprecision(1);
  int n;
  cin>>n;
  for(int i =0;i<n;i++){
    double a, b;
    cin>>a>>b;
    if(b!=0){
      double divi = a/b;
      cout<<divi<<endl;
    }else{
      cout<<"divisao impossivel"<<endl;
    }
  }
  return 0;
}
