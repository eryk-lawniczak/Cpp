#include<iostream>
#include<fstream>
#include<cmath>
#include<string>
#include<cstdlib>
#include<iomanip>
using namespace std;

void porownaj(string w, fstream &wy){
    string w1 = w.substr(0,w.length()/2);
    string w2 = w.substr(w.length()/2, w.length()-1);


    if(w1 == w2) wy<<w<<endl;

}

bool dlugosc(string a){
    int licz = 0;
    for(int i=0; i<a.length(); i++){
        licz++;
    }
    if(licz%2==0) return true;
    else return false;
}



int main(){
    fstream we, wy;

    we.open("dane.txt", ios::in);
    wy.open("wyniki_63.txt", ios::out);

//63.1
    if(we.is_open()){
        string liczba;
        wy<<"Zad 63.1"<<endl;
        while(!we.eof()){
        we>>liczba;
        if(dlugosc(liczba)) porownaj(liczba, wy);

        }
        wy<<endl;

     }else{
        cout<<"Blad otwarcia"<<endl;
     }


    system("notepad wyniki_63.txt");
    we.close();
    wy.close();
return 0;
}
