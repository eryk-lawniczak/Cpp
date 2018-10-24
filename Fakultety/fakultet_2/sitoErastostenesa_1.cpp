#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    int n;
    cout<<"Podaj koniec przedzialu"<<endl;
    cin>>n;
    bool T[n+1];
    unsigned i,w;

    for(i=2; i<=n; i++)
        T[i] = true;

    for(i=2; i<=int(sqrt(n)); i++)
        if(T[i])
            for(w=i+i; w<=n; w+=i)
                T[w] = false;

    for(i=2; i<=n; i++)
        if(T[i])
            cout<<i<<" ";

    cout<<endl;


    return 0;
}
