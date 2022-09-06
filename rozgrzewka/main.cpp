#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;
    if(a%17==0){
        a=0;
        cout << a;
    }else{
        a= a%17;
        cout << 17-a;
    }

    return 0;
}
