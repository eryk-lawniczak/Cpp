#include<iostream>

using namespace std;

int rekur(int n){
    if (n==0) return 5;				//warunek podstaowy
    else return rekur(n-1) + 3;		//warunek zlozony
}

int pot(int p, int w){
	if (w==0) return 1;
	else return p*pot(p, w-1);
}

int fib (int a){
	if (a==1 || a==2) return 1;
	else return fib(a-1) + fib(a-2);
}

void hanoi (int n, char a, char b, char c){
	if(n>0){
		hanoi (n-1, a, c, b);
		cout<< a << " na " << c<<endl;
		hanoi(n-1, c, b, a);
		
	}

int main (){
	cout<<"Dodawanie"<<endl;
    cout<<rekur(4)<<endl;
    
    cout<<"potega:"<<endl;
    cout<<pot(2,4)<<endl;
    
 	cout<<"Fibbonaci:"<<endl;
    cout<<fib(5)<<endl;
    
    cout<<"Hanoi:"<<endl;
    hanoi(3, 'A', 'B', 'C');

	cout<<"Hanoi1:"<<endl;
    hanoi1(3, 'A', 'B', 'C');    
    
return 0;
}


