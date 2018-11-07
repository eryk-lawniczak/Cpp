#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main (){

double p,
    L=20,
    E=0.001,
    a;

do{
    cout<<"Podaj liczbe: "; cin>>p;
}while(p<0);

a = p;
for(int i=0; abs(a-(p/a)) >E || i < L ;i++){
    cout<<p<<"  "<<a<<endl;
    a = (a+(p/a))/2;

}
cout<<a<<endl;

return 0;
}



