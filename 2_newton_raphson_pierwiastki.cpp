#include<iostream>
#include<cmath>
#include<iomanip>


using namespace std;

int main(){
    double p,
           a;
    double E = 0.001;
    double L = 20;

    cin>>p;
    a=p;
    for(int i=0; abs(a-(p/a))> E || i<L; i++){
        a=(a+(p/a))/2;
        cout<<"a = "<<a<<" ";
    }
    cout<<endl<<"Pierwiastek z "<<p<<" jest rowny "<<a;
return 0;
}
