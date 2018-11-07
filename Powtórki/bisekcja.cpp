#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

double f(int x){
    return x - 10;
}

int main(){
double p = -199, q = 200, s, e=0.00000000000000000000001;

if(f(p)*f(q) < 0){
    s= (p+q)/2;
cout<<s<<" "<<p<<" "<<q<<endl;
while (f(p)!=0 && f(q)!=0 && q-p >= e){
        cout<<s<<" "<<p<<" "<<q<<endl;
        s= (p+q)/2;
        if(f(p)*f(s) > 0) p = s;
        else q=s;


}

if(f(p)==0) cout<<p<<endl;
else
if(f(q)==0) cout<<q<<endl;
else
cout<<s<<endl;
}else cout<<"Zalozenia niepoprawne"<<endl;

return 0;
}





