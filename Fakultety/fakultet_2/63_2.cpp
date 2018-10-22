#include<iostream>
#include<fstream>
#include<cmath>
#include<string>
#include<cstdlib>
#include<iomanip>
using namespace std;

int licznik = 0;

void jedyneczka(string liczba, fstream &wy){

    bool obok_siebie = false;
    for(int i=1; i<=liczba.length(); i++){
        if(liczba[i-1] == '1'  && liczba[i-1] == liczba[i]){
            obok_siebie = true;
            break;
        }
    }
    if(obok_siebie == false) licznik++;

}

int main(){
    fstream we, wy;

    we.open("dane.txt", ios::in);
    wy.open("wyniki_63.txt", ios::app);

//63.2
    if(we.is_open()){
        string liczba;
        we>>liczba;
        jedyneczka(liczba, wy);

        while(!we.eof()){
        we>>liczba;
        jedyneczka(liczba, wy);

        }
        wy<<"Liczba ciagow, w ktorych nie wystepuja 2 jedynki obok siebie: "<<licznik;
        wy<<endl;

     }else{
        cout<<"Blad otwarcia"<<endl;
     }


    system("notepad wyniki_63.txt");
    we.close();
    wy.close();
return 0;
}
