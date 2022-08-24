/*#include <iostream>

using namespace std;

int main()
{
    int q;
    cin >> q;
    for(int i=0; i<q; i++){
        int n, k;
        cin >> n >> k;
        k++;
        int a = n%k;
        int suma=0;
        while(a!=k || a!=0){
            if(a>k/2){
                a++;
                suma++;
            }else if(a<=k/2){
                a--;
                suma++;
            }
        }
        cout << suma;

    }
    return 0;
}
*/
#include <iostream>

using namespace std;

int main()
{
    int q;
    cin >> q;
    int tab[q];
    for(int i=0; i<q; i++){
        int k, n;
        cin >> k >> n; //13 3
        n++; //13 4
        if(k<n){
            tab[i] = n-k;
        }else if(k==n || k%n==0){
            tab[i] = 0;
        }else{
            int a = k%n;
            if(a<=n/2){
                tab[i] = a;
            }else if(a>n/2){
                tab[i] = n-a;
            }
        }
    }
    for(int i=0; i<q; i++){
        cout << tab[i] << endl;
    }
    return 0;
}
