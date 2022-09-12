#include <iostream>

using namespace std;

int main()
{
    int a, b, l;
    cin >> a >> b >> l;
    int suma;
    suma = a*10 + b*20;
    while(suma%l!=0){
        suma-=10;
    }
    int wysokosc = suma/l;
    cout << wysokosc*10;
    return 0;
}
