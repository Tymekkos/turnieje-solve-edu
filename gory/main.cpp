#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int tab[n];
    int maxa=0;
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        tab[i] = a;
    }
    for(int i=0; i<n-1; i++){
        //cout << i  << "  --  " << tab[i]-tab[i+1] << endl;
        int bez = abs(tab[i]-tab[i+1]);
        if(bez>maxa){
            maxa = bez;
        }
    }
    cout <<  maxa;
}
