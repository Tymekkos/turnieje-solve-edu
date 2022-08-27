#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    char tab[n];
    for(int i=0; i<n; i++){
        char a;
        cin >> a;
        tab[i] = a;
    }
    int liczA=0;
    int liczB=0;
    int minroznica = 1000000;
    for(int i=0; i<n-k; i++){
        for(int j=i; j<k; j++){
            if(tab[j] == 'A'){
                liczA++;
            }else if(tab[j] == 'B'){
                liczB++;
            }
        }
        if(abs(liczB-liczA)<minroznica){
            minroznica=abs(liczB-liczA);
        }
        liczA=0;
        liczB=0;
    }
    cout << minroznica;
}
