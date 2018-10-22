#include <iostream>
#include <cmath>

using namespace std;

int main(){

    double a;
    cin>>a;
    int L=10000;
    int i;
    double E=0.0000000000000001;
    double p=0;
    double q=10000;
    double sr=(p+q)/2;

    for(i=0; i<L; i++){
       // if (sr*sr==a){
       //     break;
       // }
        if (abs(sr*sr-a)<E) break;
        if (sr*sr>a)
            q=sr;

        if (sr*sr<a)
            p=sr;
        sr=(p+q)/2;

    }
    cout<<"Liczba iteracji: "<<i<<endl;
    cout<<"Pierwiastek to: "<<sr<<endl;



    return 0;
}
