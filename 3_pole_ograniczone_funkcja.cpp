#include<iostream>
#include<cmath>
using namespace std;

double f(int x){

    return (x*x) - x - 3;
}
double pole(double a, double b, double h){

    return ((a+b)/2)*h;
}

int main (){
    int p=3,
        q=5,
        n=10;
    double dl = (q-p)/n;
    double wynik;


    for(int i=1; i<=n; i++){
       if(i<n){
         wynik = wynik + pole(f(p), f(p+dl), dl);

       }else
       wynik = wynik + pole(f(p), f(q), dl);
        p=p+dl;
    }
    cout<<"Wynik to: "<<wynik;
    return 0;
}
