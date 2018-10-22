#include<iostream>
#include<fstream>
#include<cmath>
#include<string>
#include<cstdlib>
#include<iomanip>
using namespace std;

int licznik = 0;

int dec(string a){
    int b = atoi(a.c_str());
    int dl = a.length();
    int dec = 0;
    int potega = 0;

    for(int i=dl; i>=0; i--){
        dec += (b%10)*pow(2,potega);
        b=b/10;
        potega++;
    }
    return dec;
}

bool czy_pierwsza(int czynnik){
    if(czynnik==2) return true;
    for(int i=2; i<czynnik; i++){
        if(czynnik%i == 0) return false;
    }
    return true;
}

void polpierwsza( int a){
    int czynnik = 2;
    int s_czynnik=1;
    int ilosc_czynnikow = 0;
    cout<<a<<endl;

    do{
            if(sqrt(a)==czynnik){
                ilosc_czynnikow = 2;
                a=0;
            } else
            if(a%czynnik == 0){
            a=a/czynnik;
            ilosc_czynnikow++;
            s_czynnik = czynnik;
            czynnik++;

    }czynnik++;

    }while(a>0 && ilosc_czynnikow<2);




    //if(a==0 && ilosc_czynnikow == 2) licznik ++;
    cout<<a;
    if(a-1 <= 0 && ilosc_czynnikow == 2) cout<<"polpierwsza";
}



int main(){
    fstream we, wy;


    we.open("dane.txt", ios::in);
    wy.open("wyniki_63.txt", ios::app);

//63.3
    if(we.is_open()){
        string liczba;
        liczba = "111";
        int a = dec(liczba);
        polpierwsza(a);







        //wy<<"zad. 63.3"<<endl;
        //while(!we.eof()){


        //}

        //wy<<endl;

     }else{
        cout<<"Blad otwarcia"<<endl;
     }


    //system("notepad wyniki_63.txt");
    we.close();
    wy.close();
return 0;
}

