#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int max1=a;
    if(b>max1){
        max1=b;
    }
    if(c>max1){
        max1=c;
    }
    if(d>max1){
        max1=d;
    }
    cout << max1+1;
    return 0;
}
