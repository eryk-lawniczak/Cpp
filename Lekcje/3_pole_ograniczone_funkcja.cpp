#include<iostream>
#include<cmath>
using namespace std;

double f(double x){

    double y = pow(x,2) - x -3;
    return y;
}



double trapez(double p, double q, double dl){
    double wynik =0;

    for(double i=p; i<(q-dl); i+=dl){
       wynik += (((f(i)+f(i+dl))*dl)/2);

    }
        return wynik;
    }

double pr_nadm(double p, double q, double dl){
    double pole;
     for(double i=p; i<(q-dl); i+=dl){
       if(f(i)>f(i+dl)) pole += f(i)*dl;
       else  pole += f(i+dl)*dl;

    }
    return pole;

}

double pr_podm(double p, double q, double dl){
    double pole;
     for(double i=p; i<(q-dl); i+=dl){
       if(f(i)<f(i+dl)) pole += f(i)*dl;
       else  pole += f(i+dl)*dl;

    }
    return pole;

}
double prost(double p, double q, double dl){
    double pole;
     for(double i=p; i<(q-dl); i+=dl){

        pole += f(i+(dl/2))*dl;

    }
    return pole;

}
int main (){
    double  p=3, q=5, n=20, dl = (q-p)/n;

    cout<<"Trapez: "<<trapez(p, q, dl)<<endl;
    cout<<"Prostokat z nadmiarem: "<<pr_nadm(p, q, dl)<<endl;
    cout<<"Prostokat z niedomiarem: "<<pr_podm(p, q, dl)<<endl;
    cout<<"Prostokat: "<<prost(p, q, dl)<<endl;



    return 0;
}
