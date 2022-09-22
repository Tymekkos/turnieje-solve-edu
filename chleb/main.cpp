#include <iostream>

using namespace std;

string jedzenie[] = {"chleb", "kukurydza", "tatar", "owies"};

int main()
{
    string a;
    cin >> a;
    int b=0;
    int c=0;
    for(int i=0; i<4; i++){
        if(a == jedzenie[i]){
            b++;
            if(a != "chleb"){
                c++;
            }
        }
    }
    if(b==0){
        return 0;
    }
    if(c>0){
        cout << "TAK";
    }else{
        cout << "NIE";
    }
}
