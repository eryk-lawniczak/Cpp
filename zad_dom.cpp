#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

double f(double x){
 return -(pow(x,2))/50;
}

double g(double x){
 return ((1+(pow(x,2)))/100)-(x/200);
}


long double F(double p, double q, double h, double e=1){
long double
    wynik = 0;

    for(double i=p; i<(q-h); i+=h){

        wynik += (((g(i) - f(i))  + (g(i+h)-f(i+h)))*h)/2;
    }
    return wynik;

}

double round_up(double a){
double liczba = a*100; //przesuwamy liczbê o precyzjê np: 0,123123 = 12,3123

        int b = (int)liczba; //robimy z tego int 12,3123 = 12

        liczba =(double)b/100; //przesuwamy do precyzji 12 = 0,12

        return liczba; //zwracamy liczbê z precyzj¹ 2
}


int main(){

double
    p = 0,
    q =10,
    n = 2000,
    e = 0.01,
    h = (q-p)/n;

    cout<<"Podaj wartosc C: "; cin>>q;

    cout<<"Przyblizone pole figury kartezjanskiej F("<<q<<") wynosi: "<<round_up(F(p,q,h))<<endl<<endl;

int C = 0;
int szerokosc = 100;
int x = 26;
while ((g(C)-f(C))<=x){
    C++;
   // if(f(C) != (int)f(C) || g(C) != (int)g(C) || f(C+100) != (int)f(C+100) || f(C+100) != (int)f(C+100)) x++;
}
szerokosc += C;

cout<<"Najmniejsza liczba naturalna C dla ktorej mo¿na umiescic prostokat 100 x 26,\n wewnatrz pola ograniczonego wykresem funkcji to: "<<C<<endl;
cout<<"Wierzcholki: "<<(g(C))<<", "<<(f(C))<<", "<<(g(szerokosc))<<", "<<(f(szerokosc))<<endl;


return 0;
}
