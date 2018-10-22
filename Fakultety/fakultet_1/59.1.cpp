#include<iostream>
#include<fstream>
#include<cmath>
#include<string>
#include<cstdlib>
#include<iomanip>
using namespace std;

int dlugosc (int liczba){
    int dl = 1;
    while((liczba/=10) != 0){
        dl++;
    }
    return dl;
}

void czynniki(int liczba, fstream &wy){
    dlugosc = dlugosc(liczba);
    for(int i=0; i<dlugosc ; i++){

    }
}

int main(){
    fstream we, wy;

    we.open("liczby.txt", ios::in);
    wy.open("wyniki_59_1.txt", ios::out);


    if(we.is_open()){
        int liczba;

        while(!we.eof()){
       // we>>liczba;
        //czynniki(liczba, wy);

        }


     }else{
        cout<<"Blad otwarcia"<<endl;
     }
    // system("notepad wyniki.txt");

    we.close();
    wy.close();
return 0;
}
