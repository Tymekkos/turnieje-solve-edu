#include <iostream>

using namespace std;

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
    if()
    cout << wyjA << "/" << wyjB;
    return 0;
}
