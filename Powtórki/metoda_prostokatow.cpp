#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

double f(double x){
    return pow(x,2) - x -3;
}

int main (){
double p = 3, q = 5, n = 200, dl, h,  pole;

dl = (q-p)/n;
for(double i = p; i<q ; i+=dl){
    pole += f(i+(dl/2))*dl;
}
cout<<pole;
return 0;
}




