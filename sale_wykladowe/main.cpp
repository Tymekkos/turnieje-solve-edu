#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;
    int w, x, y, z;
    int pole1, pole2;
    cin >> a >> b >> c >> d;
    cin >> w >> x >> y >> z;
    if(a == b && c==d){
        pole1 = a*c;
    }else if(a == c && b==d){
        pole1 = a*b;
    }else if(a == d && c==b){
        pole1 = a*c;
    }
    if(w == x && y==z){
        pole2 = w*y;
    }else if(w == y && x==z){
        pole2 = w*x;
    }else if(w == z && x==y){
        pole2 = w*y;
    }
    if(pole1>pole2){
        cout << ">";
    }else if(pole1<pole2){
        cout << "<";
    }else{
        cout << "=";
    }
    return 0;
}
