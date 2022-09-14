#include <iostream>

using namespace std;

string nazwiska[] = {"Gawrychowski", "Lorys", "Nowak", "Pokorski", "Uznanski"};
string imiona[] = {"Pawel", "Krzysztof", "Rafal", "Karol", "Przemyslaw"};

int main()
{
    string a;
    cin >> a;
    int b;
    for(int i=0; i<5; i++){
        if(a == nazwiska[i]){
          b=i;
        }
    }
    cout << imiona[b];
    return 0;
}
