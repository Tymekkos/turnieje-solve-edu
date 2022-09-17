#include <iostream>

using namespace std;

bool jestZlozona(int n)
{
    if (n <= 1){
        return false;
    }
    if (n <= 3){
       return false;
    }

    if (n%2 == 0 || n%3 == 0) return true;

    for (int i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
           return true;

    return false;
}

int main()
{
    int n;
    cin >> n;
    int tab[n];
    for(int i=0; i<n; i++)
    {
        int a, b;
        cin >> a >> b;
        int wynik=0;
        int liczba;
        for(int i=a; i<=b; i++){
            if(jestZlozona(i)){
                liczba = i;
                wynik++;
                break;
            }
        }
        if(wynik>0){
            tab[i] = liczba;
        }else{
            tab[i] = 0;
        }
    }
    for(int i=0; i<n; i++)
    {
        if(tab[i] == 0){
            cout << "NIE" << endl;
        }else{
            cout << tab[i] << endl;
        }
    }
    return 0;
}
