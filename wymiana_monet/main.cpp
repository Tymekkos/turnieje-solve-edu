#include <iostream>

using namespace std;

int main()
{
    long long n, m;
    cin >> n >> m;
    int suma=0;
    while(m>=2){
        if(n==0 && m>=4){
            m-=2;
            n++;
        }else if(n==0 && m<4){
            suma--;
        }
        n--;
        m-=2;
        suma++;
    }

    cout << suma;

    return 0;
}
