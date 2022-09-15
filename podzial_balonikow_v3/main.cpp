#include <iostream>

using namespace std;

int countDistinct(int arr[], int n)
{
    int res = 1;

    for (int i = 1; i < n; i++) {
        int j = 0;
        for (j = 0; j < i; j++)
            if (arr[i] == arr[j])
                break;

        if (i == j)
            res++;
    }
    return res;
}


int main()
{
    int n;
    cin >> n;
    int tab[n];
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        tab[i] = a;
    }
    int rozne = countDistinct(tab, n);
    cout << "rozne " << rozne << endl;
    int odp=0;
    int odpowiedz;
    int minodpowiedz = 2*n+1;
    for(int k=1; k<n; k++){
        for(int i=0; i<k; i++){
            for(int j = k; j<n; j++){
                if(tab[i] == tab[j]){
                    odp++;
                }
            }
            odpowiedz = rozne - odp;
            odp=0;
            if(odpowiedz < minodpowiedz){
                minodpowiedz = odpowiedz;
            }

        }

    }
    cout << minodpowiedz;

/*
    for(int k=1; k<=n; k++){
        for(int i=0; i<k; i++){
            for(int j = k; j<n-1; j++){
                if(tab[i] == tab[j]){
                    odp++;
                }
            }
            if(odp==0){
                odpowiedz++;
            }
            odp = 0;
        }
        cout << "a " << odpowiedz << endl;
        if(odpowiedz < minodpowiedz){
            minodpowiedz = odpowiedz;
        }
        odpowiedz=0;
    }
    cout << minodpowiedz;
*/
    return 0;
}
