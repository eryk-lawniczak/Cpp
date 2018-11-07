#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

double f(double x){
    return pow(x,2) - x -3;
}

int main (){
double p = 3, q = 5, n = 20, dl, h,  pole;

dl = (q-p)/n;
for(double i = p; i<q ; i+=dl){
    pole += ((f(i)+f(i+dl))*dl)/2;
}
cout<<pole;
return 0;
}
