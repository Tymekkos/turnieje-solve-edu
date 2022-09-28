#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void skroculamek(int x, int y)
{
    int d;
    d = __gcd(x, y); //najwiekszy wspolny dzielnik

    x = x / d;
    y = y / d;

    cout << x << "/" << y;
}

int main()
{
    int n;
    cin >> n;
    int tab[n];
    for(int i=0; i<n; i++){
        double a;
        cin >> a;
        tab[i] = a;
    }
    double wyjA;
    double wyjB;
    for(int i=0; i<n; i++){
        double suma;
        double wynik;
        double najwynik;
        suma += tab[i];
        wynik = suma/(i+1);
        if(wynik > najwynik){
            najwynik = wynik;
            wyjA = suma;
            wyjB = i+1;
        }
    }
    /*
    if(wyjA % wyjB == 0){
        wyjA = wyjA/wyjB
        wyjB = 1;
    }else if(wyjB % wyjA == 0){
        wyjA = wyjA/wyjB
        wyjB = 1;
    }
    */
    skroculamek(wyjA, wyjB);
    return 0;
}
