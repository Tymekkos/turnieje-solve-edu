#include <iostream>

using namespace std;

int main()
{
    char a, b;
    char c, d;
    cin >> a >> b;
    c=a;
    d=b;
    if(a>=65&&a<=90){
        a+=32;
        if(a==b){
            a-=32;
            cout << a;
            return 0;
        }
    }
    if(b>=65&&b<=90){
        b+=32;
        if(b==a){
            b-=32;
            cout << b;
            return 0;
        }
    }
    if(a<b){
        cout << c;
    }else{
        cout << d;
    }
    return 0;
}
