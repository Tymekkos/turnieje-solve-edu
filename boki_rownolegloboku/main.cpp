#include <iostream>

using namespace std;

int main()
{
    int a, b, c ,d;
    cin >> a >> b >> c >> d;
    if(a==b){
        if(c==d){
            cout << "TAK";
        }
    }
    else if(a==c){
        if(b==d){
            cout << "TAK";
        }
    }
    else if(a==d){
        if(b==c){
            cout << "TAK";
        }
    }
    else{
        cout << "NIE";
    }
    return 0;
}
