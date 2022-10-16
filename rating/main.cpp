#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int tab[n];
    for(int i=0; i<n; i++){
        long long a;
        cin >> a;
        tab[i] = a;
    }
    long long suma=0;
    long long maxa=0;
    for(int i=0; i<n-1; i++){
        if(tab[i+1] > tab[i]){
            suma++;
        }else{
            suma=0;
        }
        if(suma>maxa){
            maxa=suma;
        }
    }
    maxa++;
    cout << maxa;
    return 0;
}
